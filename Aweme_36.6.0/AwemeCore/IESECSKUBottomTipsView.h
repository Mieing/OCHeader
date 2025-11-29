@interface IESECSKUBottomTipsView : UIView

@property (copy, nonatomic) id /* block */ buttonClickCallback;

+ (double)tipsButtonWidthWith:(id)a0;
+ (double)tipsViewHeightWith:(id)a0;

- (void)setupWith:(id)a0;
- (id)buttonTextAttrWith:(id)a0;
- (id)initTipViewWith:(id)a0;
- (void).cxx_destruct;
- (void)tapAction:(id)a0;

@end
