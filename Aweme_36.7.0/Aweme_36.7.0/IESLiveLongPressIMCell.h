@class IESLiveLongPressFuncModel, UIImageView, CAShapeLayer, UILabel, UIView, UIButton;

@interface IESLiveLongPressIMCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *recommendTextLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIButton *imSendButton;
@property (retain, nonatomic) UIImageView *sendView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *onlineDotView;
@property (nonatomic) BOOL isNewRecommend;
@property (retain, nonatomic) IESLiveLongPressFuncModel *model;

- (void)actionButtonClicked;
- (void)updateOnlineStatus:(BOOL)a0;
- (void)updateCellCorner:(BOOL)a0 cornerPosition:(unsigned long long)a1 topPadding:(double)a2 bottomPadding:(double)a3 showLine:(BOOL)a4;
- (void)updateRecommendContent:(id)a0;
- (id)p_hasRecommendedText;
- (id)p_hasRecommendedIconUrlStr;
- (id)p_recommendText;
- (id)p_recommendIconUrlStr;
- (void)updateDisabledState;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)accessibilityActivate;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
