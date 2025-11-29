@class NSString, UIImageView, AWENearbyAdModel, AWEGradientView, UILabel;

@interface AWENearbyAdCollectionCell : UICollectionViewCell <AWEGokuPluginTargetProtocol>

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *adImageView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) AWENearbyAdModel *model;
@property (nonatomic) BOOL isInFeedContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_descriptionWithModel:(id)a0;
+ (double)cellHeightForWidth:(double)a0 model:(id)a1;

- (void)willDisplayNearByCellWithContext:(id)a0;
- (void)didSelectNearByCellWithContext:(id)a0;
- (void)configurationWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (unsigned long long)moduleNames;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
