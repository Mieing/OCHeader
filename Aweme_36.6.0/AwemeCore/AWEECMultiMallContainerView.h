@class NSString, NSMutableDictionary;

@interface AWEECMultiMallContainerView : UIView <IESECMallAnchorFloatingProtocol>

@property (retain, nonatomic) NSMutableDictionary *floatingViewMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasMarketingResWithSceneType:(long long)a0 tabInfo:(id)a1;
- (void)switchToNextTabInfo:(id)a0;
- (BOOL)needReportMarketingResShowWithSceneType:(long long)a0 tabInfo:(id)a1;
- (void)didShowAnchorFloatingView:(id)a0 token:(id)a1 sceneType:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
