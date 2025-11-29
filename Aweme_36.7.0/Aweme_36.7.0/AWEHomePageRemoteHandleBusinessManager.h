@class NSString, AWEHomePageRemoteManager;

@interface AWEHomePageRemoteHandleBusinessManager : NSObject <AWEHomePageRemoteBusinessDelegate>

@property (weak, nonatomic) AWEHomePageRemoteManager *remoteManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportHomePageRemoteCardUI;
+ (id)supportHomePageRemoteButtonUI;
+ (id)supportHomePageRemoteRadioBoxUI;

- (void)businessTrackModeClickWithModeName:(id)a0;
- (void)businessRemoveAlertIfNeed;
- (id)getHomePageRemoteTrackContext;
- (void)updatePocketIconWithModel:(id)a0 withBusinessType:(id)a1;
- (void)updateSelectedPocketIconWithModel:(id)a0 withBusinessType:(id)a1;
- (void)panelPositiveCloseWithAnimateType:(long long)a0;
- (id)createHomepageRemoteViewWithController:(id)a0 withModuleType:(id)a1 withItemDataModel:(id)a2;
- (id)convertItemDataModelWithController:(id)a0 withModuleType:(id)a1 extraData:(id)a2;
- (id)initWithRemoteManager:(id)a0;
- (void).cxx_destruct;

@end
