@interface TPRichMediaMappingUtils : NSObject

+ (id)richMediaInfoWithNativeRichMediaInfo:(const void *)a0;
+ (id)richMediaInfoArrayWithNativeInfoArray:(const void *)a0;
+ (int)nativeActOnOptionWithActOnOption:(long long)a0;
+ (struct TPPlayerRichMediaExtraRequestInfo { int x0; })nativeRichMediaExtraRequestInfoWithExtraRequestInfo:(id)a0;
+ (id)richMediaContentWithNativeContent:(const void *)a0;
+ (id)richMediaResponseWithNativeResponse:(const void *)a0;
+ (void)convertNumberArray:(id)a0 toIntVector:(void *)a1;
+ (struct vector<long long, std::allocator<long long>> { long long *x0; long long *x1; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x0; } x2; })int64VectorWithNumberArray:(id)a0;
+ (struct TPPlayerRichMediaTimeRange { long long x0; long long x1; })nativeRichMediaTimeRangeWithTimeRange:(id)a0;
+ (struct vector<TPPlayerRichMediaTimeRange, std::allocator<TPPlayerRichMediaTimeRange>> { struct TPPlayerRichMediaTimeRange *x0; struct TPPlayerRichMediaTimeRange *x1; struct __compressed_pair<TPPlayerRichMediaTimeRange *, std::allocator<TPPlayerRichMediaTimeRange>> { struct TPPlayerRichMediaTimeRange *x0; } x2; })nativeRichMediaTimeRangeArrayWithTimeRangeArray:(id)a0;

@end
