@interface WCFinderDataTool : NSObject

+ (id)arrayToJsonString:(id)a0;
+ (id)dictionaryWithJsonString:(id)a0;
+ (id)dictionaryToJson:(id)a0;
+ (id)clearNotSameDayTimeStamp:(id)a0;
+ (BOOL)isSameDayTimeStamp1:(long long)a0 timeStamp2:(long long)a1;
+ (id)convertJsonStringToData:(id)a0;
+ (BOOL)isSameWeekByTimeStamp1:(long long)a0 timeStamp2:(long long)a1;
+ (void)mockCatonAction;
+ (id)getTargetIvarInObject:(id)a0 className:(Class)a1;
+ (struct CLLocationCoordinate2D { double x0; double x1; })genAssetCoordinateFromAssetId:(id)a0;
+ (BOOL)assetHasGPSInfo:(id)a0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })genAssetCoordinateFromAssets:(id)a0;
+ (id)removeTimestampsBeforeNDays:(id)a0 days:(long long)a1;
+ (id)getTimestampsInNDays:(id)a0 days:(long long)a1;
+ (id)base64EncodeString:(id)a0;
+ (long long)countOfTimestampsGreaterThan:(id)a0 inArray:(id)a1;
+ (BOOL)isValidLocationLongitude:(double)a0 latitude:(double)a1;
+ (BOOL)isInvalidSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)compareProtoObject:(id)a0 withObject:(id)a1;
+ (id)colorFromRGBAString:(id)a0;
+ (BOOL)isFromCarouselScene:(unsigned long long)a0;
+ (void)mergePublisherPostInfo:(id)a0 toPostSession:(id)a1;
+ (BOOL)isInvalidWidHeightCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)mergeSvrHeaderParamsBy:(id)a0 separateChar:(id)a1 cdnHeaderParamType:(unsigned long long)a2;
+ (BOOL)isHttpUrl:(id)a0;
+ (unsigned long long)unicodeLengthOfString:(id)a0;
+ (BOOL)areRangesOverlapping:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 range2:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (long long)calcModifyTextCountBy:(id)a0;
+ (void)makeDataItemFakeSuc:(id)a0;
+ (id)diffBetweenFromContent:(id)a0 toContent:(id)a1;
+ (id)getAIGCEstimatedAigcWaitTime:(long long)a0;
+ (long long)calculateCombination:(long long)a0 choose:(long long)a1;
+ (id)getDiffFeedByOldArray:(id)a0 localFocusFeedId:(id)a1 newArray:(id)a2;
+ (BOOL)isOnMainQueueOrMainThread;
+ (double)calculateDistanceBetweenCoordinate1:(struct CLLocationCoordinate2D { double x0; double x1; })a0 andCoordinate2:(struct CLLocationCoordinate2D { double x0; double x1; })a1;

@end
