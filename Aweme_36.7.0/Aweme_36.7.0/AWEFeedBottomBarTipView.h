@class UIButton, UITapGestureRecognizer, UIImageView, UIView, AWEFeedBottomBarViewModel, UILabel;
@protocol AWEFeedRecordSpeciesTipViewProtocol;

@interface AWEFeedBottomBarTipView : UIView <AWEGrootBottomViewProtocol>

@property (retain, nonatomic) AWEFeedBottomBarViewModel *viewModel;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UITapGestureRecognizer *singleTap;
@property (weak, nonatomic) id<AWEFeedRecordSpeciesTipViewProtocol> delegate;
@property (nonatomic) BOOL shouldCancelPreviousTouch;

- (void)closeButtonClicked:(id)a0;
- (void)setupBinding;
- (void)trackForShow;
- (void)configSubViews;
- (id)initWithEnterFrom:(id)a0 reactID:(id)a1 paramsDic:(id)a2;
- (void)configWithModel:(id)a0 indexPath:(id)a1 isClickToEnter:(BOOL)a2;
- (void)fullScreenLayout;
- (void)normalScreenLayout;
- (void)shotButtonClicked:(id)a0;
- (void).cxx_destruct;
- (void)cancel:(id)a0;

@end
