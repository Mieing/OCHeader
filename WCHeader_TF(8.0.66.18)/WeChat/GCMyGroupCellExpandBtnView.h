@class UILabel, UIImageView, UIView;
@protocol GCMyGroupCellExpandBtnViewDelegate;

@interface GCMyGroupCellExpandBtnView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIView *redDotView;
@property (weak, nonatomic) id<GCMyGroupCellExpandBtnViewDelegate> delegate;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL hasRedDot;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
