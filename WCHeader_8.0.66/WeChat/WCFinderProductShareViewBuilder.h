@class WCFinderProductShareViewBuildConfig, WCFinderLiveProductShareItem;

@interface WCFinderProductShareViewBuilder : NSObject

@property (retain, nonatomic) WCFinderProductShareViewBuildConfig *config;
@property (retain, nonatomic) WCFinderLiveProductShareItem *item;

- (double)titleHightForText:(id)a0 firstLineWidth:(double)a1 singleLine:(BOOL)a2;
- (double)buildInCanvas:(id)a0;
- (double)estimateHeightForWidth:(double)a0;
- (void).cxx_destruct;

@end
