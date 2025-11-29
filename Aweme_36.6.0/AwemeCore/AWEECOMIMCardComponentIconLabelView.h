@class NSString, UIImageView, UILabel, NSAttributedString;

@interface AWEECOMIMCardComponentIconLabelView : UIView <AWEECOMIMCardComponentMultiLabel>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
