@class NSObject;
@protocol AWEHomePageRemoteControllerProtocol, AWEHomePageRemoteBusinessDelegate;

@interface AWEHomePageRemoteProxy : NSObject

@property (weak, nonatomic) NSObject<AWEHomePageRemoteControllerProtocol> *controller;
@property (weak, nonatomic) id<AWEHomePageRemoteBusinessDelegate> businessDelegate;

- (void)businessTrackModeClickWithModeName:(id)a0;
- (void)businessPositiveClosePanelWithAnimateType:(long long)a0;
- (id)createHomepageRemoteViewWithModuleType:(id)a0 withItemDataModel:(id)a1;
- (id)convertItemDataModelWithModuleType:(id)a0 extraData:(id)a1;
- (void)businessRemoveAlertIfNeed;
- (id)initWithController:(id)a0 homePageRemoteBusinessDelegate:(id)a1;
- (void).cxx_destruct;

@end
