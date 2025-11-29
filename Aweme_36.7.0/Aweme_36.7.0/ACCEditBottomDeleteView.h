@class UIImageView, UILabel, UIView;

@interface ACCEditBottomDeleteView : UIView <ACCSequencePreViewDeleteViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *trashIcon;
@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) BOOL allowDelete;

+ (double)deleteViewHeight;

- (void)p_setupViews;
- (void)updateDeleteStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
