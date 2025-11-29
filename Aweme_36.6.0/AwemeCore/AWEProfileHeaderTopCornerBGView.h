@class AWEProfileHeaderContext, AWEProfileHeaderColorfulView;

@interface AWEProfileHeaderTopCornerBGView : UIView

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (nonatomic) double maskHeight;
@property (retain, nonatomic) AWEProfileHeaderColorfulView *colorfulView;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)refreshAlphaForHeaderView:(double)a0;
- (void)p_addMaskWithHeight:(double)a0;
- (BOOL)p_enableCornerLayerOpt;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithContext:(id)a0;

@end
