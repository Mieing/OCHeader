@class UIView;

@interface AWETeenGeneralSingleVideoCell : AWETeenGeneralBaseVideoCell

@property (retain, nonatomic) UIView *albumDarkShadow;
@property (retain, nonatomic) UIView *albumLightShadow;

+ (struct CGSize { double x0; double x1; })cellSizeWithModel:(id)a0 cardType:(unsigned long long)a1;

- (void)initializeLayout;
- (void)showLog;
- (void)configWithModel:(id)a0 interactionDelegate:(id)a1 parentVC:(id)a2 cardType:(unsigned long long)a3 extraParam:(id)a4;
- (id)createInteractionView;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)canPlay;

@end
