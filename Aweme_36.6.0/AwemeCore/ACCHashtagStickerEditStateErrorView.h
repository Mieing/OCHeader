@class UILabel, UIButton, UIView;

@interface ACCHashtagStickerEditStateErrorView : ACCHashtagEditStateBaseView

@property (retain, nonatomic) UIView *errorContentView;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UILabel *retryLabel;
@property (retain, nonatomic) UIButton *retryBtn;
@property (copy, nonatomic) id /* block */ errorRetryBlock;

- (void)errorRetryButtonClick;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
