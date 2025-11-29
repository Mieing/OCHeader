@class UIColor, NSString, UIImageView, UIImage, IESECListKitBackgroundModel;

@interface IESECMallBackgroundView : UIView

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *headerBgImageView;
@property (copy, nonatomic) NSString *currentBackgroundUrl;
@property (copy, nonatomic) NSString *currentHeaderBgImageUrl;
@property (retain, nonatomic) IESECListKitBackgroundModel *background;
@property (nonatomic) unsigned long long currentThemeStyle;
@property (copy, nonatomic) NSString *defaultBgUrl;
@property (retain, nonatomic) UIColor *defaultColor;
@property (nonatomic) double topBarBottom;
@property (retain, nonatomic) UIImage *currentBgImage;

- (void)buildUI;
- (void)listenListCollectionScrollOffsetY:(double)a0;
- (void)setGrayIfNeed:(BOOL)a0;
- (id)defaultDarkBgUrl;
- (double)bgImageViewHeight:(id)a0;
- (void)updateConstraintsAfterPadRotation:(double)a0 width:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)updateData;
- (void)buildConstraints;

@end
