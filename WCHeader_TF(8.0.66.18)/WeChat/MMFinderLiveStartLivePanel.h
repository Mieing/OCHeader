@class UIView, MMWebImageView, WCFinderContact, MMFinderLiveControlButtonCell, MMLiveTaskId, MMFinderLiveControlButtonItem, UIButton, WCFinderAuthInfoIconView, RichTextView, WCFinderHeadImageView, UILabel;
@protocol MMFinderLiveStartLivePanelDelegate;

@interface MMFinderLiveStartLivePanel : MMPageSheetBaseView

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (weak, nonatomic) id<MMFinderLiveStartLivePanelDelegate> delegate;
@property (retain, nonatomic) WCFinderContact *selfContact;
@property (retain, nonatomic) MMFinderLiveControlButtonItem *cameraItem;
@property (retain, nonatomic) MMFinderLiveControlButtonItem *beautyItem;
@property (retain, nonatomic) MMWebImageView *anchorCoverImageView;
@property (retain, nonatomic) UIView *videoCoverView;
@property (retain, nonatomic) WCFinderHeadImageView *avatorImageView;
@property (retain, nonatomic) RichTextView *nicknameTV;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) MMFinderLiveControlButtonCell *beautyCell;
@property (retain, nonatomic) MMFinderLiveControlButtonCell *cameraCell;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *leaveBtn;
@property (retain, nonatomic) UIButton *startBtn;
@property (nonatomic) BOOL keepDataForDismiss;
@property (retain, nonatomic) UIView *activeRenderTargetView;

- (id)initWithTaskId:(id)a0 activeRenderTargetView:(id)a1 delegate:(id)a2;
- (void)setupPageSheetConfig;
- (void)updateFinderContact;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutVideoCoverView;
- (void)showWithAnimated:(BOOL)a0;
- (void)updateCells;
- (id)liveTask;
- (void)onClickedLeave;
- (void)onClickedStart;
- (void)onClickBeauty;
- (void)onClickCamera;
- (void)pageSheetDidDismiss;
- (void).cxx_destruct;

@end
