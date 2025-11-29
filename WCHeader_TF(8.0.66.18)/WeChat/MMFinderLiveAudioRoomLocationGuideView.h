@class UIButton, MMUIImageView, NSMutableArray, MMFinderLiveTaskId, UIView, UILabel, MMUILabel;

@interface MMFinderLiveAudioRoomLocationGuideView : MMPageSheetBaseView

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIView *squareView;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIView *anchorCircle;
@property (retain, nonatomic) MMUIImageView *anchorImage;
@property (retain, nonatomic) UIView *locationContainerView;
@property (retain, nonatomic) MMUIImageView *locationIconView;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) NSMutableArray *circles;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (id)initWithTaskId:(id)a0;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)setupUI;
- (id)createCircleView:(BOOL)a0;
- (void)layoutUI;
- (void)showWithAnimated:(BOOL)a0;
- (void)dealloc;
- (id)liveTask;
- (void)onClickedConfirm;
- (void)onClickedCancel;
- (void)pageSheetDidClose:(BOOL)a0;
- (void).cxx_destruct;

@end
