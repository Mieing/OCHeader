@class AWEUserModel;

@interface AWEIMBTMTrackerComponent : AWEIMComponentBase

@property (nonatomic) BOOL isAppearing;
@property (nonatomic) BOOL hasReportBTMTracking;
@property (retain, nonatomic) AWEUserModel *fullDetailUser;

- (void)hostVC_viewDidLoad;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)p_viewDidAppear;
- (id)vcParent;
- (id)im_btm_pageIdentifier;
- (void)takeParamsForMessageTransferWithClueInfo;
- (void).cxx_destruct;

@end
