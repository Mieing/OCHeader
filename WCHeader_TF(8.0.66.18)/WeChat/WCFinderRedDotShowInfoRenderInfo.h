@class WCFinderRedDotRenderResultModel;

@interface WCFinderRedDotShowInfoRenderInfo : NSObject

@property (nonatomic) double availableWidth;
@property (retain, nonatomic) WCFinderRedDotRenderResultModel *renderModel;
@property (nonatomic) unsigned long long entryScene;

- (BOOL)canReuseByAvailableWidth:(double)a0 entryScene:(unsigned long long)a1;
- (void).cxx_destruct;

@end
