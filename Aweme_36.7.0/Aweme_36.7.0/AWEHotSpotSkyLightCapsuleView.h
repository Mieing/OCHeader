@class UILabel, UIImageView;
@protocol AWEHotSpotSkyLightCapsuleViewDelegate;

@interface AWEHotSpotSkyLightCapsuleView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<AWEHotSpotSkyLightCapsuleViewDelegate> delegate;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)tapGestureAction:(id)a0;
- (void)updateCapsuleViewTitle:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
