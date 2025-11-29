@class CAGradientLayer, NSString, UIImageView, AWETeenHotSpotListLabel, UILabel, AWEAwemeModel, AWEGradientView;

@interface AWETeenUserWorkCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *imageIconView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) AWETeenHotSpotListLabel *hotSpotLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isMine;
@property (nonatomic) BOOL usingDynamicCover;
@property (retain, nonatomic) AWEGradientView *bottomMaskView;
@property (nonatomic) double imageRequestSentinel;
@property (nonatomic) struct CGSize { double width; double height; } preferImageViewSize;
@property (readonly, nonatomic) CAGradientLayer *maskLayer;
@property (copy, nonatomic) NSString *referString;

+ (id)identifier;

- (void)updateCoverWithCompletion:(id /* block */)a0;
- (BOOL)shouldUseDynamicCover:(id)a0;
- (void)clearAnimatedImageBuffer;
- (void)configWithModel:(id)a0 isMine:(BOOL)a1;
- (void)p_onAwemeDiggNotification:(id)a0;
- (void)configWithModel:(id)a0 isMine:(BOOL)a1 shouldShowHotSpot:(BOOL)a2;
- (void)updateLikeIconLeftBottomCornerMaegin:(struct CGPoint { double x0; double x1; })a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
