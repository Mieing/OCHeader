@class UILabel, UIImageView;

@interface AWEDetailHeaderOwnerView : UIView

@property (retain, nonatomic) UILabel *ownerLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (void)updateHidden;
- (void)updateViewWithStyle:(id)a0;
- (void)updateToUserName:(id)a0 attrName:(id)a1 userID:(id)a2 secUserID:(id)a3;
- (void)setArrowHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)setTitleHidden:(BOOL)a0;

@end
