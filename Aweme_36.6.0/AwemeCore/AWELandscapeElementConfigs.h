@protocol AWELandscapeVCContainerProtocol;

@interface AWELandscapeElementConfigs : NSObject

@property (weak, nonatomic) id<AWELandscapeVCContainerProtocol> actionDelegate;

- (id)classNameArrayForTopContainerWithPageContext:(id)a0;
- (id)classNameArrayForVideoInfoContainerWithPageContext:(id)a0;
- (id)classNameArrayForMiddleContainerWithPageContext:(id)a0;
- (id)classNameArrayForBottomContainerWithPageContext:(id)a0;
- (void)configTopContainer:(id)a0 pageContext:(id)a1;
- (void)configVideoInfoContainer:(id)a0 pageContext:(id)a1;
- (void)configMiddleContainer:(id)a0 pageContext:(id)a1;
- (void)configBottomContainer:(id)a0 pageContext:(id)a1;
- (void).cxx_destruct;

@end
