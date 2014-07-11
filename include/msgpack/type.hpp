#include "cpp_config.hpp"
#include "adaptor/bool.hpp"
#include "adaptor/deque.hpp"
#include "adaptor/fixint.hpp"
#include "adaptor/float.hpp"
#include "adaptor/int.hpp"
#include "adaptor/list.hpp"
#include "adaptor/map.hpp"
#include "adaptor/nil.hpp"
#include "adaptor/pair.hpp"
#include "adaptor/raw.hpp"
#include "adaptor/set.hpp"
#include "adaptor/string.hpp"
#include "adaptor/vector.hpp"
#include "adaptor/msgpack_tuple.hpp"
#include "adaptor/define.hpp"
#include "adaptor/tr1/unordered_map.hpp"
#include "adaptor/tr1/unordered_set.hpp"

#if !defined(MSGPACK_USE_CPP03)

#include "adaptor/cpp11/tuple.hpp"

#endif // !defined(MSGPACK_USE_CPP03)
