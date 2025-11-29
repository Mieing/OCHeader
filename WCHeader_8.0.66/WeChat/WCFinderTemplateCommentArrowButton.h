@class UILabel, MMWebImageView;

@interface WCFinderTemplateCommentArrowButton : MMUIButton

@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;

+ (double)heightWithTitle:(id)a0 maxWidth:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)updateWithIcon:(id)a0 title:(id)a1;
- (void)updateWithIconUrl:(id)a0 title:(id)a1 bgColor:(id)a2;
- (void)layoutWithMaxWidth:(double)a0;
- (void).cxx_destruct;

@end
