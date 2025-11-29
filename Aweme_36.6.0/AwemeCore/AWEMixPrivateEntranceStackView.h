@class NSMutableArray, UIView;

@interface AWEMixPrivateEntranceStackView : UIView

@property (retain, nonatomic) UIView *lockView;
@property (retain, nonatomic) NSMutableArray *photoViews;

+ (id)defaultImageArrayWithCount:(long long)a0;
+ (id)handleImageArrayIfNeed:(id)a0 privateCount:(long long)a1;
+ (struct CGSize { double x0; double x1; })expectedSizeWithImageURLArrays:(id)a0 privateCount:(long long)a1;

- (void)onThemeChange;
- (void)configWithImageURLArrays:(id)a0 privateCount:(long long)a1;
- (void)awe_removeAllSubviewsSafely;
- (id)generatePhotoImageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
