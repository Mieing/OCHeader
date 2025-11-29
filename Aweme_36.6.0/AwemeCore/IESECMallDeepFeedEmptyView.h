@class IESECUIImageView, UIView, UILabel, UIButton;
@protocol IESECMallDeepFeedEmptyViewDelegate;

@interface IESECMallDeepFeedEmptyView : UIView

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) IESECUIImageView *backButtonImageView;
@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) IESECUIImageView *errorNetImageView;
@property (retain, nonatomic) UILabel *errorNetLabel;
@property (retain, nonatomic) UILabel *refreshLabel;
@property (retain, nonatomic) UIButton *refreshButton;
@property (weak, nonatomic) id<IESECMallDeepFeedEmptyViewDelegate> delegate;

- (void)backButtonDidTap:(id)a0;
- (void)refreshButtonDidTap:(id)a0;
- (void).cxx_destruct;
- (void)resetState;
- (id)init;
- (void)setupUI;

@end
