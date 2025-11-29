@class UIButton, UITapGestureRecognizer, UIImageView, AWEIMMarkMoveNoticeTipConfigModel, UILabel, UIView, YYLabel;
@protocol AWEIMMarkMoveNoticeTipViewProtocol;

@interface AWEIMMarkMoveNoticeTipView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *subTitleLabel;
@property (retain, nonatomic) UIButton *deleteBtn;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) UILabel *tokenLabel;
@property (retain, nonatomic) UIImageView *tokenImageView;
@property (retain, nonatomic) UIView *tokenContainer;
@property (retain, nonatomic) AWEIMMarkMoveNoticeTipConfigModel *configModel;
@property (weak, nonatomic) id<AWEIMMarkMoveNoticeTipViewProtocol> delegate;

- (void)configWithModel:(id)a0;
- (id)initWithConfigModel:(id)a0;
- (void)setupLayouts;
- (void)setupTruncationTokenWithConfig:(id)a0;
- (void)didTapMoveNoticeViewCard;
- (void)didTapTailToken;
- (void)didClickDeleteIcon:(id)a0;
- (void).cxx_destruct;
- (double)height;
- (void)setup;
- (void)setupView;

@end
