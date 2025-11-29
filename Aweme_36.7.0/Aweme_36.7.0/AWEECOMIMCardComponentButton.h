@class AWEECOMIMCardButtonActionModel;

@interface AWEECOMIMCardComponentButton : UIButton

@property (retain, nonatomic) AWEECOMIMCardButtonActionModel *actionModel;
@property (nonatomic) BOOL loading;
@property (nonatomic) double loadingTime;

+ (id)secondTextColor;
+ (id)buttonTitleColorDict;
+ (id)buttonBorderColorDict;
+ (id)defaultTitleColor;

- (void)bindActionModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithAction:(id)a0;
- (void)onTap;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
