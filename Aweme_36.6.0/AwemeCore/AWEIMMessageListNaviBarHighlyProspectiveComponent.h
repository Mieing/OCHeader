@class NSString, AWEIMHightlyProspectiveView, UIViewController;
@protocol IESIMSheetVCProtocol;

@interface AWEIMMessageListNaviBarHighlyProspectiveComponent : AWEIMComponentBase <AWEIMMessageListNaviBarViewProvider, IESIMSheetVCDelegate>

@property (retain, nonatomic) AWEIMHightlyProspectiveView *hightlyProspectiveView;
@property (nonatomic) BOOL highlyProsepectiveViewClickEventInProcess;
@property (retain, nonatomic) UIViewController<IESIMSheetVCProtocol> *basicSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetWillDismiss:(id)a0;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (double)naviBarViewCustomSpacing;
- (void)naviBarViewWillAppearToPosition:(long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_markConversationHighlyProspective:(BOOL)a0;
- (BOOL)p_showHighlyProspectivePopupViewIfNeeded;
- (void)p_didClickConfirmButton;
- (void)p_hightlyProspectiveViewClicked;
- (void).cxx_destruct;

@end
