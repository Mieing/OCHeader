@class AWEDPlayerInteractionViewConfig;

@interface AWEDPlayerElementConfigs : NSObject

@property (retain, nonatomic) AWEDPlayerInteractionViewConfig *viewConfig;

- (id)initWithViewConfig:(id)a0;
- (void)configTopContainer:(id)a0 pageContext:(id)a1;
- (void)configVideoInfoContainer:(id)a0 pageContext:(id)a1;
- (void)configMiddleContainer:(id)a0 pageContext:(id)a1;
- (void)configBottomContainer:(id)a0 pageContext:(id)a1;
- (void).cxx_destruct;

@end
