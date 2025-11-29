@class NSString, AWECoverPreviewController, AWECoverChooseBottomView, NSDictionary, AWECoverChooseBottomViewModel, ACCRepositoryWorkspace, UIButton;
@protocol ACCSequenceEditServiceProtocol;

@interface AWESlidesCoverChooseViewController : UIViewController <AWECoverPreviewDelegate, AWECoverChooseBottomViewDelegate>

@property (retain, nonatomic) ACCRepositoryWorkspace *workspace;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> editService;
@property (retain, nonatomic) AWECoverChooseBottomViewModel *bottomViewModel;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *saveBtn;
@property (retain, nonatomic) AWECoverPreviewController *previewController;
@property (retain, nonatomic) AWECoverChooseBottomView *bottomView;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (copy, nonatomic) id /* block */ willDismissBlock;
@property (copy, nonatomic) id /* block */ moveClipAction;
@property (retain, nonatomic) NSDictionary *chooseCoverExtraAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaSmallMediaContainerFrame;
- (void)resetTitle;
- (void)sliderViewTouchBegin;
- (void)sliderViewTouchMoved;
- (id)bottomViewTrackerParams;
- (void)didSelectCoverTimeInPercent:(double)a0;
- (void)bottomViewDidTapReset:(id)a0;
- (void)bottomViewShouldStartEditing:(id)a0;
- (double)viewHeightForCoverPreviewController:(id)a0;
- (long long)currentAlbumIndexForPreviewController:(id)a0;
- (struct CGSize { double x0; double x1; })videoSizeForCoverPreviewController:(id)a0;
- (id)previewController:(id)a0 titleModelWithTitle:(id)a1;
- (id)initWithWorkspace:(id)a0 editService:(id)a1;
- (void)dismissForSave:(BOOL)a0;
- (void)trackCancelWithAlertShow:(id)a0;
- (void)trackSaveCoverEdit;
- (id)fetchCoverTextImage;
- (void)trackCoverTextReset;
- (double)previewViewHeight;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)configureViews;
- (double)fontScale;
- (void)cancelAction:(id)a0;
- (void)saveAction:(id)a0;

@end
