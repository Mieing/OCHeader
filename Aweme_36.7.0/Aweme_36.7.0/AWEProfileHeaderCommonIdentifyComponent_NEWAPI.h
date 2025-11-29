@class AWEProfileYYLabel, UIColor, AWEProfileHeaderVirtualView;

@interface AWEProfileHeaderCommonIdentifyComponent_NEWAPI : AWEProfileHeaderBaseComponent

@property (nonatomic) double maxWidth;
@property (retain, nonatomic) AWEProfileHeaderVirtualView *virtualView;
@property (retain, nonatomic) AWEProfileYYLabel *label;
@property (copy, nonatomic) UIColor *defaultColor;

+ (void)trackIdentifyClickWithContext:(id)a0 model:(id)a1;
+ (id)identifyDescWithModel:(id)a0 defaultColor:(id)a1;
+ (void)trackIdentifyShowWithContext:(id)a0 model:(id)a1;

- (id)buildVirtualView:(id)a0;
- (id)buildSubComponents;
- (void)refreshVirtualView;
- (void)calibrateSize;
- (id)initWithData:(id)a0 context:(id)a1 maxWidth:(double)a2;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)onTap;

@end
