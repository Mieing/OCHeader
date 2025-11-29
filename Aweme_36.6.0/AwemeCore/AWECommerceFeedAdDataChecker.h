@class NSString, AWEAwemeModel;
@protocol AWECommerceComponentContext;

@interface AWECommerceFeedAdDataChecker : NSObject <AWECommerceComponentProtocol>

@property (copy, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowComponentWithContext:(id)a0;
+ (BOOL)canDetect;

- (void)checkFeedPlayableDataWithAweme:(id)a0;
- (void)checkMannorData;
- (void)checkLokiData;
- (void)checkLynxCardData;
- (void)checkCardInfosData;
- (void)checkCommerceConfigData;
- (void)checkActivityPendantData;
- (void)checkNakedEye3DData;
- (void)checkLabelData;
- (void)checkAnchorData;
- (void)trackWithScene:(id)a0 extraParams:(id)a1;
- (void)checkFullScreenContainerData:(id)a0;
- (void)checkNormalLokiData:(id)a0;
- (void).cxx_destruct;

@end
