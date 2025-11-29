@class NSDictionary;
@protocol AWEPOIUgcUIModuleHostProtocol;

@interface AWEPOIDetailFeedUgcInfoTagsContainerView : UIView

@property (weak, nonatomic) id<AWEPOIUgcUIModuleHostProtocol> delegate;
@property (copy, nonatomic) NSDictionary *clickRouterParams;

+ (double)heightWithTagsArray:(id)a0;

- (void)updateWithTagsArray:(id)a0 itemSpacing:(double)a1 splitType:(unsigned long long)a2;
- (id)createTagViewWithModel:(id)a0;
- (id)createSplitLine;
- (void).cxx_destruct;

@end
