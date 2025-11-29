@class YYLabel;

@interface AWEPlayInteractionTagsContainerLabelView : UIView

@property (retain, nonatomic) YYLabel *nameLabel;
@property (retain, nonatomic) YYLabel *infoLabel;

- (void)updateLabelTextWithNickName:(id)a0 labelInfo:(id)a1 isDetailComment:(BOOL)a2;
- (double)p_handleLengthOfString:(id)a0 withAttributes:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
