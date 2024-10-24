#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000012 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000013 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000014 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000015 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000016 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000017 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000018 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001C System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001D System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000020 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000021 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000026 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000027 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000028 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002B System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000002F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000030 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000031 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000034 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000003F System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000040 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000041 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000042 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000043 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000044 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000045 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000046 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000047 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000048 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000049 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000004A System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000004B System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000004C System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004D System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000004E System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000004F System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000050 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000051 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000052 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000054 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000057 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000058 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000059 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000005A System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000005B System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000005C System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000005D System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000005E System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000005F T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000060 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000061 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[97] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[97] = 
{
	3244,
	3396,
	3396,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[34] = 
{
	{ 0x02000004, { 61, 4 } },
	{ 0x02000005, { 65, 9 } },
	{ 0x02000006, { 76, 7 } },
	{ 0x02000007, { 85, 10 } },
	{ 0x02000008, { 97, 11 } },
	{ 0x02000009, { 111, 9 } },
	{ 0x0200000A, { 123, 12 } },
	{ 0x0200000B, { 138, 1 } },
	{ 0x0200000C, { 139, 2 } },
	{ 0x0200000D, { 141, 2 } },
	{ 0x0200000E, { 143, 4 } },
	{ 0x0200000F, { 147, 21 } },
	{ 0x02000011, { 168, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 3 } },
	{ 0x06000009, { 33, 4 } },
	{ 0x0600000A, { 37, 4 } },
	{ 0x0600000B, { 41, 3 } },
	{ 0x0600000C, { 44, 1 } },
	{ 0x0600000D, { 45, 1 } },
	{ 0x0600000E, { 46, 3 } },
	{ 0x0600000F, { 49, 3 } },
	{ 0x06000010, { 52, 2 } },
	{ 0x06000011, { 54, 2 } },
	{ 0x06000012, { 56, 5 } },
	{ 0x06000022, { 74, 2 } },
	{ 0x06000027, { 83, 2 } },
	{ 0x0600002C, { 95, 2 } },
	{ 0x06000032, { 108, 3 } },
	{ 0x06000037, { 120, 3 } },
	{ 0x0600003C, { 135, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[170] = 
{
	{ (Il2CppRGCTXDataType)2, 1788 },
	{ (Il2CppRGCTXDataType)3, 6260 },
	{ (Il2CppRGCTXDataType)2, 2783 },
	{ (Il2CppRGCTXDataType)2, 2337 },
	{ (Il2CppRGCTXDataType)3, 10634 },
	{ (Il2CppRGCTXDataType)2, 1861 },
	{ (Il2CppRGCTXDataType)2, 2344 },
	{ (Il2CppRGCTXDataType)3, 10669 },
	{ (Il2CppRGCTXDataType)2, 2339 },
	{ (Il2CppRGCTXDataType)3, 10646 },
	{ (Il2CppRGCTXDataType)2, 1789 },
	{ (Il2CppRGCTXDataType)3, 6261 },
	{ (Il2CppRGCTXDataType)2, 2804 },
	{ (Il2CppRGCTXDataType)2, 2349 },
	{ (Il2CppRGCTXDataType)3, 10684 },
	{ (Il2CppRGCTXDataType)2, 1874 },
	{ (Il2CppRGCTXDataType)2, 2357 },
	{ (Il2CppRGCTXDataType)3, 10848 },
	{ (Il2CppRGCTXDataType)2, 2353 },
	{ (Il2CppRGCTXDataType)3, 10759 },
	{ (Il2CppRGCTXDataType)2, 634 },
	{ (Il2CppRGCTXDataType)3, 31 },
	{ (Il2CppRGCTXDataType)3, 32 },
	{ (Il2CppRGCTXDataType)2, 1053 },
	{ (Il2CppRGCTXDataType)3, 4147 },
	{ (Il2CppRGCTXDataType)2, 636 },
	{ (Il2CppRGCTXDataType)3, 43 },
	{ (Il2CppRGCTXDataType)3, 44 },
	{ (Il2CppRGCTXDataType)2, 1063 },
	{ (Il2CppRGCTXDataType)3, 4152 },
	{ (Il2CppRGCTXDataType)2, 743 },
	{ (Il2CppRGCTXDataType)3, 755 },
	{ (Il2CppRGCTXDataType)3, 756 },
	{ (Il2CppRGCTXDataType)2, 1575 },
	{ (Il2CppRGCTXDataType)2, 1185 },
	{ (Il2CppRGCTXDataType)2, 1278 },
	{ (Il2CppRGCTXDataType)2, 1374 },
	{ (Il2CppRGCTXDataType)2, 1576 },
	{ (Il2CppRGCTXDataType)2, 1186 },
	{ (Il2CppRGCTXDataType)2, 1279 },
	{ (Il2CppRGCTXDataType)2, 1375 },
	{ (Il2CppRGCTXDataType)2, 1280 },
	{ (Il2CppRGCTXDataType)2, 1376 },
	{ (Il2CppRGCTXDataType)3, 4148 },
	{ (Il2CppRGCTXDataType)2, 923 },
	{ (Il2CppRGCTXDataType)2, 1271 },
	{ (Il2CppRGCTXDataType)2, 1272 },
	{ (Il2CppRGCTXDataType)2, 1372 },
	{ (Il2CppRGCTXDataType)3, 4146 },
	{ (Il2CppRGCTXDataType)2, 1270 },
	{ (Il2CppRGCTXDataType)2, 1371 },
	{ (Il2CppRGCTXDataType)3, 4145 },
	{ (Il2CppRGCTXDataType)2, 1184 },
	{ (Il2CppRGCTXDataType)2, 1277 },
	{ (Il2CppRGCTXDataType)2, 1183 },
	{ (Il2CppRGCTXDataType)3, 12939 },
	{ (Il2CppRGCTXDataType)3, 3648 },
	{ (Il2CppRGCTXDataType)2, 971 },
	{ (Il2CppRGCTXDataType)2, 1274 },
	{ (Il2CppRGCTXDataType)2, 1373 },
	{ (Il2CppRGCTXDataType)2, 1459 },
	{ (Il2CppRGCTXDataType)3, 6262 },
	{ (Il2CppRGCTXDataType)3, 6264 },
	{ (Il2CppRGCTXDataType)2, 465 },
	{ (Il2CppRGCTXDataType)3, 6263 },
	{ (Il2CppRGCTXDataType)3, 6272 },
	{ (Il2CppRGCTXDataType)2, 1792 },
	{ (Il2CppRGCTXDataType)2, 2340 },
	{ (Il2CppRGCTXDataType)3, 10647 },
	{ (Il2CppRGCTXDataType)3, 6273 },
	{ (Il2CppRGCTXDataType)2, 1316 },
	{ (Il2CppRGCTXDataType)2, 1401 },
	{ (Il2CppRGCTXDataType)3, 4158 },
	{ (Il2CppRGCTXDataType)3, 12905 },
	{ (Il2CppRGCTXDataType)2, 2354 },
	{ (Il2CppRGCTXDataType)3, 10760 },
	{ (Il2CppRGCTXDataType)3, 6265 },
	{ (Il2CppRGCTXDataType)2, 1791 },
	{ (Il2CppRGCTXDataType)2, 2338 },
	{ (Il2CppRGCTXDataType)3, 10635 },
	{ (Il2CppRGCTXDataType)3, 4157 },
	{ (Il2CppRGCTXDataType)3, 6266 },
	{ (Il2CppRGCTXDataType)3, 12904 },
	{ (Il2CppRGCTXDataType)2, 2350 },
	{ (Il2CppRGCTXDataType)3, 10685 },
	{ (Il2CppRGCTXDataType)3, 6279 },
	{ (Il2CppRGCTXDataType)2, 1793 },
	{ (Il2CppRGCTXDataType)2, 2345 },
	{ (Il2CppRGCTXDataType)3, 10670 },
	{ (Il2CppRGCTXDataType)3, 6768 },
	{ (Il2CppRGCTXDataType)3, 2850 },
	{ (Il2CppRGCTXDataType)3, 4159 },
	{ (Il2CppRGCTXDataType)3, 2849 },
	{ (Il2CppRGCTXDataType)3, 6280 },
	{ (Il2CppRGCTXDataType)3, 12906 },
	{ (Il2CppRGCTXDataType)2, 2358 },
	{ (Il2CppRGCTXDataType)3, 10849 },
	{ (Il2CppRGCTXDataType)3, 6293 },
	{ (Il2CppRGCTXDataType)2, 1795 },
	{ (Il2CppRGCTXDataType)2, 2356 },
	{ (Il2CppRGCTXDataType)3, 10762 },
	{ (Il2CppRGCTXDataType)3, 6294 },
	{ (Il2CppRGCTXDataType)2, 1319 },
	{ (Il2CppRGCTXDataType)2, 1404 },
	{ (Il2CppRGCTXDataType)3, 4163 },
	{ (Il2CppRGCTXDataType)3, 4162 },
	{ (Il2CppRGCTXDataType)2, 2342 },
	{ (Il2CppRGCTXDataType)3, 10649 },
	{ (Il2CppRGCTXDataType)3, 12911 },
	{ (Il2CppRGCTXDataType)2, 2355 },
	{ (Il2CppRGCTXDataType)3, 10761 },
	{ (Il2CppRGCTXDataType)3, 6286 },
	{ (Il2CppRGCTXDataType)2, 1794 },
	{ (Il2CppRGCTXDataType)2, 2352 },
	{ (Il2CppRGCTXDataType)3, 10687 },
	{ (Il2CppRGCTXDataType)3, 4161 },
	{ (Il2CppRGCTXDataType)3, 4160 },
	{ (Il2CppRGCTXDataType)3, 6287 },
	{ (Il2CppRGCTXDataType)2, 2341 },
	{ (Il2CppRGCTXDataType)3, 10648 },
	{ (Il2CppRGCTXDataType)3, 12910 },
	{ (Il2CppRGCTXDataType)2, 2351 },
	{ (Il2CppRGCTXDataType)3, 10686 },
	{ (Il2CppRGCTXDataType)3, 6300 },
	{ (Il2CppRGCTXDataType)2, 1796 },
	{ (Il2CppRGCTXDataType)2, 2360 },
	{ (Il2CppRGCTXDataType)3, 10851 },
	{ (Il2CppRGCTXDataType)3, 6769 },
	{ (Il2CppRGCTXDataType)3, 2852 },
	{ (Il2CppRGCTXDataType)3, 4165 },
	{ (Il2CppRGCTXDataType)3, 4164 },
	{ (Il2CppRGCTXDataType)3, 2851 },
	{ (Il2CppRGCTXDataType)3, 6301 },
	{ (Il2CppRGCTXDataType)2, 2343 },
	{ (Il2CppRGCTXDataType)3, 10650 },
	{ (Il2CppRGCTXDataType)3, 12912 },
	{ (Il2CppRGCTXDataType)2, 2359 },
	{ (Il2CppRGCTXDataType)3, 10850 },
	{ (Il2CppRGCTXDataType)3, 4155 },
	{ (Il2CppRGCTXDataType)3, 4156 },
	{ (Il2CppRGCTXDataType)3, 4169 },
	{ (Il2CppRGCTXDataType)2, 2811 },
	{ (Il2CppRGCTXDataType)2, 924 },
	{ (Il2CppRGCTXDataType)2, 1188 },
	{ (Il2CppRGCTXDataType)2, 2807 },
	{ (Il2CppRGCTXDataType)2, 1295 },
	{ (Il2CppRGCTXDataType)2, 1381 },
	{ (Il2CppRGCTXDataType)3, 3666 },
	{ (Il2CppRGCTXDataType)2, 980 },
	{ (Il2CppRGCTXDataType)3, 4529 },
	{ (Il2CppRGCTXDataType)3, 4530 },
	{ (Il2CppRGCTXDataType)3, 4535 },
	{ (Il2CppRGCTXDataType)2, 1467 },
	{ (Il2CppRGCTXDataType)3, 4532 },
	{ (Il2CppRGCTXDataType)3, 13433 },
	{ (Il2CppRGCTXDataType)2, 943 },
	{ (Il2CppRGCTXDataType)3, 2841 },
	{ (Il2CppRGCTXDataType)1, 1252 },
	{ (Il2CppRGCTXDataType)2, 2815 },
	{ (Il2CppRGCTXDataType)3, 4531 },
	{ (Il2CppRGCTXDataType)1, 2815 },
	{ (Il2CppRGCTXDataType)1, 1467 },
	{ (Il2CppRGCTXDataType)2, 2864 },
	{ (Il2CppRGCTXDataType)2, 2815 },
	{ (Il2CppRGCTXDataType)3, 4536 },
	{ (Il2CppRGCTXDataType)3, 4534 },
	{ (Il2CppRGCTXDataType)3, 4533 },
	{ (Il2CppRGCTXDataType)2, 360 },
	{ (Il2CppRGCTXDataType)3, 2853 },
	{ (Il2CppRGCTXDataType)2, 474 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	97,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	34,
	s_rgctxIndices,
	170,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
