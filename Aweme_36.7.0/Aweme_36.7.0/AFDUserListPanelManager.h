@class NSString, DUXContentSheet, UIView, UIViewController;
@protocol AWEAgreeStoreVideoViewedViewProtocol, AWEViewedUserListPanelViewControllerProtocol;

@interface AFDUserListPanelManager : NSObject <DUXSheetDelegate, AWEViewedUserListPanelVCDelegate, AFDUserListPanelManagerProtocol>

@property (retain, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) UIViewController<AWEViewedUserListPanelViewControllerProtocol> *viewerListViewController;
@property (retain, nonatomic) UIView<AWEAgreeStoreVideoViewedViewProtocol> *agreeStoreVideoViewedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetWillDismiss:(id)a0;
- (void)sheet:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (void)showViewedRecordListWithContext:(id)a0;
- (id)agreeViewTitleTextWithAweme:(id)a0;
- (id)agreeViewSubtitleTextWithAweme:(id)a0;
- (void)p_showViewedRecordListWithContext:(id)a0;
- (id)trackParamsWithAweme:(id)a0 enterFrom:(id)a1 previousPage:(id)a2 previousMethod:(id)a3;
- (void)updateSheetTitle;
- (void)didFinishRefresh;
- (void).cxx_destruct;

@end
