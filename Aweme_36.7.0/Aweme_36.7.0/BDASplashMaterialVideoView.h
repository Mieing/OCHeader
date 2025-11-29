@class BDASplashMaterialViewModel;

@interface BDASplashMaterialVideoView : BDASplashBaseVideoView

@property (retain, nonatomic) BDASplashMaterialViewModel *materialModel;
@property (nonatomic) unsigned long long srErrorCode;

- (BOOL)enableNNSR;
- (void)setEnableVideo15SR:(BOOL)a0;
- (void)setSRLongLower:(long long)a0;
- (void)setSRLongUpper:(long long)a0;
- (void)setSRShortLower:(long long)a0;
- (void)setSRShortUpper:(long long)a0;
- (BOOL)enable15SR;
- (BOOL)isLowBattery:(long long)a0;
- (void)setupVideoEngine;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 materialModel:(id)a1;
- (void)configSROption;
- (void).cxx_destruct;
- (void)dealloc;

@end
