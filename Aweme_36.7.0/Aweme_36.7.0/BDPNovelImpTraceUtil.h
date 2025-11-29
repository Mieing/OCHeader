@interface BDPNovelImpTraceUtil : NSObject

+ (void)sendOnViewStateChangeEvent:(id)a0 pageContext:(id)a1;
+ (void)sendOnNativeBackClick:(id)a0;
+ (void)sendOnNativeClick:(id)a0 clickPoint:(struct CGPoint { double x0; double x1; })a1;
+ (void)traceFlowAdReaderOnScreenBookId:(id)a0 managedAdPolicy:(BOOL)a1 isFirstDisplay:(BOOL)a2 unitId:(id)a3 uniqueID:(id)a4 realPageGap:(long long)a5;
+ (void)traceFlowAdReaderOffScreen:(double)a0 bookId:(id)a1 managedAdPolicy:(BOOL)a2 offReason:(id)a3 unitId:(id)a4 uniqueID:(id)a5;
+ (void)sendLCPEventWithView:(id)a0 viewType:(id)a1 url:(id)a2 model:(id)a3 timeStamp:(double)a4 extraInfo:(id)a5;
+ (void)sendLCPEventWithView:(id)a0 viewType:(id)a1 url:(id)a2 imageSize:(struct CGSize { double x0; double x1; })a3 model:(id)a4 timeStamp:(double)a5 extraInfo:(id)a6;
+ (void)sendOnViewChangeEvent:(id)a0 headPageContext:(id)a1 tailPageContext:(id)a2 readDirection:(long long)a3;
+ (void)sendOnViewExposureEvent:(id)a0 pageContext:(id)a1;
+ (void)sendOnScrollChangeEvent:(id)a0 meta:(id)a1 isStart:(BOOL)a2 reachEnd:(BOOL)a3;
+ (id)contentType:(unsigned long long)a0;
+ (void)traceStorageTotalDuration:(double)a0 size:(long long)a1 LRUDuration:(double)a2 writeDuration:(double)a3 intelligenceDuration:(double)a4 cacheType:(id)a5 dataType:(id)a6 isWriteData:(BOOL)a7 uniqueID:(id)a8 totalSize:(long long)a9 bookId:(id)a10;
+ (void)traceLayoutDuration:(double)a0 size:(long long)a1 bookId:(id)a2 contentId:(id)a3 contentType:(unsigned long long)a4 waitingTime:(double)a5 result:(id)a6 uniqueID:(id)a7;

@end
