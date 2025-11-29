@class NSString, UIView, WCFinderStarterLiveViewModel, MMUILabel;

@interface WCStartGroupLiveHalfScreenView : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate, MMFinderLiveNewShareSettingViewControllerDelegate>

@property (retain, nonatomic) UIView *detailView;
@property (retain, nonatomic) UIView *visibilitySettingLabel;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) WCFinderStarterLiveViewModel *starterViewModel;
@property (nonatomic) unsigned long long showType;
@property (nonatomic) BOOL didVisibilityModeManullyChoosed;
@property (copy, nonatomic) id /* block */ confirmCallback;
@property (copy, nonatomic) id /* block */ cancelCallback;
@property (copy, nonatomic) id /* block */ closeCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStarterViewModel:(id)a0 showType:(unsigned long long)a1;
- (void)viewDidLoad;
- (void)configDetailView;
- (id)getLiveStarterSelectViewModel;
- (void)updateDetailLabel;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)onMMFinderLiveShareSettingViewControllerTapDoneWithShareSettingResult:(id)a0;
- (void)onVisibilityLabelClicked;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)registerYReportSdk;
- (void)reportExposeOnDidLoad;
- (void)reportOnConfirm;
- (void).cxx_destruct;

@end
