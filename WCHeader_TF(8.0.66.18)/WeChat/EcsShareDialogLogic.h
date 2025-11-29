@class MMScrollActionSheet, NSArray, NSDictionary, EcsShareEventCallback, UIView, NSString;

@interface EcsShareDialogLogic : NSObject <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, MMActionSheetScrollViewDelegate>

@property (weak, nonatomic) MMScrollActionSheet *actionSheet;
@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) NSArray *menuItemLine1;
@property (retain, nonatomic) NSArray *menuItemLine2;
@property (retain, nonatomic) NSDictionary *sourceReportData;
@property (retain, nonatomic) EcsShareEventCallback *callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)show;
- (id)checkEnableShow;
- (id)createActionSheetMenuItem;
- (id)createActionSheetMenuItem1:(id)a0;
- (id)createActionSheetMenuItem2:(id)a0;
- (BOOL)shouldShowRecentlyForwardView:(id)a0;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)scrollActionSheetDidDismiss:(id)a0;
- (void)scrollActionSheetDidAppeared:(id)a0;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (void).cxx_destruct;

@end
