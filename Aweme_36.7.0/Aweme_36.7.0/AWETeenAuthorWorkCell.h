@class AWEAwemeModel, UIImageView, AWETeenHotSpotListLabel, AWEGradientView, UILabel, AWETeenJustSeenMaskView;

@interface AWETeenAuthorWorkCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *workImageView;
@property (retain, nonatomic) AWEGradientView *bottomMaskView;
@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) UILabel *likeNumLabel;
@property (retain, nonatomic) AWETeenHotSpotListLabel *hotSpotLabel;
@property (retain, nonatomic) AWETeenJustSeenMaskView *justSeenMaskView;
@property (retain, nonatomic) AWEGradientView *dateMaskView;
@property (retain, nonatomic) UILabel *createTimeLabel;
@property (retain, nonatomic) UIImageView *imageIconView;
@property (nonatomic) unsigned long long workType;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

- (void)configWithShowJustSeen:(BOOL)a0 showHotLabel:(BOOL)a1 workType:(unsigned long long)a2 awemeModel:(id)a3;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
