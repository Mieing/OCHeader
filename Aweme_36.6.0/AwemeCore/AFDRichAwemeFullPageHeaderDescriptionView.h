@class NSString, NSDictionary, AFDRichAwemeFullPageHeaderDescriptionLabel;

@interface AFDRichAwemeFullPageHeaderDescriptionView : UIView

@property (retain, nonatomic) AFDRichAwemeFullPageHeaderDescriptionLabel *titleLabel;
@property (retain, nonatomic) AFDRichAwemeFullPageHeaderDescriptionLabel *bodyLabel;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *logExtra;

+ (Class)aAWEPadFullPageAdapterClass;

- (void)configWithModel:(id)a0;
- (id)aAWEPadFullPageAdapter;
- (BOOL)shouldRespondTapGestures:(id)a0;
- (double)calcYYLabelHeightWithAttributedString:(id)a0 label:(id)a1;
- (double)titleTextTopOffset;
- (double)bodyTextTopOffsetWithTitle:(BOOL)a0;
- (BOOL)p_gestureNotHitHighlight:(id)a0 forLabel:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
