@class UIView, NSString, CAShapeLayer, UIButton, MMFinderLiveTaskId, UIVisualEffectView, UILabel, MMUILabel;
@protocol MMLiveAudienceAccountIntroViewDelegate;

@interface MMLiveAudienceAccountIntroView : MMPageSheetBaseView <UIGestureRecognizerDelegate>

@property (nonatomic) unsigned long long viewScene;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *introTitleLabel;
@property (retain, nonatomic) MMUILabel *introDetailLabel;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIVisualEffectView *visualEfView;
@property (retain, nonatomic) UIButton *chooseRoleButton;
@property (retain, nonatomic) UIButton *enterLiveButton;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (weak, nonatomic) id<MMLiveAudienceAccountIntroViewDelegate> operationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 andScene:(unsigned long long)a1;
- (void)dealloc;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void)onChooseButtonClicked;
- (void)onEnterLiveButtonClicked;
- (void).cxx_destruct;

@end
