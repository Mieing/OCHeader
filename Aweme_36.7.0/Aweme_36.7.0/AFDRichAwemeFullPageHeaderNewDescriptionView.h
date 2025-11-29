@class NSString, AFDRichAwemeFullPageDescriptionTextView;

@interface AFDRichAwemeFullPageHeaderNewDescriptionView : UIView

@property (retain, nonatomic) AFDRichAwemeFullPageDescriptionTextView *titleLabel;
@property (retain, nonatomic) AFDRichAwemeFullPageDescriptionTextView *bodyLabel;
@property (copy, nonatomic) NSString *referString;

- (void)configWithModel:(id)a0;
- (BOOL)shouldRespondTapGestures:(id)a0;
- (double)titleTextTopOffset;
- (double)bodyTextTopOffsetWithTitle:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
