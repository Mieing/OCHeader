@class MMUIImageView, NSString, UIView, MMUILabel;

@interface WeAppGameJoinTeamConditionItemView : MMUIButton

@property (nonatomic) int conditionId;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) MMUILabel *conditionLabel;
@property (retain, nonatomic) MMUIImageView *rightIconView;
@property (retain, nonatomic) UIView *bottomLineView;

- (id)initWithParmas:(id)a0 idx:(int)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)enableChecked:(BOOL)a0;
- (int)getId;
- (id)getDesc;
- (void).cxx_destruct;

@end
