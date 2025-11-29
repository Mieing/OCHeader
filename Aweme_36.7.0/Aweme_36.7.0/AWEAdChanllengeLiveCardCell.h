@class HTSLiveRoom, UIImageView, UIView, AWEAdChallengeLiveTipsView, UILabel;

@interface AWEAdChanllengeLiveCardCell : UICollectionViewCell

@property (retain, nonatomic) UIView *previewCard;
@property (retain, nonatomic) AWEAdChallengeLiveTipsView *liveTipsView;
@property (retain, nonatomic) UIImageView *liveAvatar;
@property (retain, nonatomic) UILabel *liveTitle;
@property (retain, nonatomic) UILabel *liveUserName;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) UIImageView *coverPhoto;
@property (retain, nonatomic) HTSLiveRoom *roomModel;

+ (id)identifier;

- (void)setupSubView;
- (void)updateWithECommerceCardModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
