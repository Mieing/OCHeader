@interface IESECMallDeepFeedUtil : NSObject

+ (id)forceDouyinNumberABCFontOfSize:(double)a0 weight:(long long)a1;
+ (double)finalSizeWithOrigin:(double)a0;
+ (id)pingFangFontWithSize:(double)a0 weight:(long long)a1;
+ (BOOL)deepFeedAddAd;
+ (void)responseWithEventType:(unsigned long long)a0 sender:(id)a1 userInfo:(id)a2 responder:(id)a3;
+ (id)getCarouselImageLayoutFromURL:(id)a0;
+ (BOOL)styleOptimize;
+ (double)mallNotFullScreenCellHeight;
+ (double)getWidthFromUILabel:(id)a0;
+ (void)setStyleOptimize:(BOOL)a0;
+ (void)prefetchImageWithURLString:(id)a0 sceneTag:(id)a1;
+ (id)pingFangFontWithSize:(double)a0 weight:(long long)a1 updateScale:(BOOL)a2;

@end
