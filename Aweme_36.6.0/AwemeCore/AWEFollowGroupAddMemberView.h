@class UIImageView, UIView, NSNumber, UIButton;

@interface AWEFollowGroupAddMemberView : UIView

@property (retain, nonatomic) UIView *iconBgView;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UIButton *createButton;
@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) id /* block */ createBlock;

- (void)createButtonClick;
- (void)__setupView;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
