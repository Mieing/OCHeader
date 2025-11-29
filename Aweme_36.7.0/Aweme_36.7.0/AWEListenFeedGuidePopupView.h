@class UIImageView, UILabel, UIButton;

@interface AWEListenFeedGuidePopupView : AWEFeedBasePopupView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ confirmButtonClickAction;
@property (copy, nonatomic) id /* block */ dismissedBlock;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (id)listenFeedPopupView;

- (id)aAWEPadModuleAdapter;
- (id)aAWEPlayInteractionAdapter;
- (void)p_onClickConfirm;
- (id)initWithContentViewHeight:(double)a0;
- (void)p_configViews;
- (void).cxx_destruct;
- (void)hide;

@end
