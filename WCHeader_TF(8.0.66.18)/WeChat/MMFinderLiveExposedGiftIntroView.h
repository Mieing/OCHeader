@class MMFinderLiveCoinButton, NSString, MMFinderLiveTaskId, UIView, UILabel, UIButton;

@interface MMFinderLiveExposedGiftIntroView : MMPageSheetBaseView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *introTitleLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) MMFinderLiveCoinButton *confirmButton;
@property (nonatomic) unsigned int wecoinCount;
@property (nonatomic) BOOL isKTVGift;
@property (copy, nonatomic) id /* block */ cancelButtonClickedCallback;
@property (copy, nonatomic) id /* block */ confirmButtonClickedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 isKTVGift:(BOOL)a1 wecoinCount:(unsigned int)a2;
- (void)dealloc;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (id)finderLiveTask;
- (void)onCancelButtonClicked;
- (void).cxx_destruct;

@end
