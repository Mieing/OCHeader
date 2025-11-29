@class CAGradientLayer, UIImageView, IESLiveImageView, UIView, UILabel;
@protocol IESFeedLiveMarkViewProtocol, IESLiveWebPPlayer;

@interface IESLiveInnerFeedLiveGuideCardSkylightCell : UICollectionViewCell

@property (retain, nonatomic) UIView<IESFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) UIView *avatarBackView;
@property (retain, nonatomic) IESLiveImageView *avatarImageView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationView;
@property (retain, nonatomic) UIImageView *liveTagImageView;
@property (retain, nonatomic) UILabel *liveTagLabelView;
@property (retain, nonatomic) CAGradientLayer *tagBackground;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (copy, nonatomic) id /* block */ didClick;
@property (copy, nonatomic) id /* block */ touchBeganBlock;

+ (id)reuseIdentifier;

- (void)setupAvatarImageView;
- (void)setupLiveMarkView;
- (void)setupLiveTagView;
- (void)setupNickNameLabel;
- (struct CGSize { double x0; double x1; })avatarBackViewSize;
- (void)avatarDidClickedAction;
- (void)showWave;
- (void)configWithCellModel:(id)a0 index:(long long)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;

@end
