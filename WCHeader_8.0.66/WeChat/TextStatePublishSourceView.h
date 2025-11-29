@class MMUILabel, NSString, UIColor, MMWebImageView, UIView, UITapGestureRecognizer;

@interface TextStatePublishSourceView : MMUIButton

@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) NSString *sourceId;
@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) NSString *iconImageURL;
@property (retain, nonatomic) UIView *customView;
@property (copy, nonatomic) id /* block */ refreshHandler;
@property (copy, nonatomic) id /* block */ tapHandler;
@property (nonatomic) BOOL preferCustomView;
@property (retain, nonatomic) UIColor *textColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithTextState:(id)a0 preferredSourceType:(unsigned int)a1;
- (void)updateWithTextState:(id)a0;
- (void)initSubviews;
- (void)initGesture;
- (void)layoutSubviews;
- (void)addShadowEffect;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateIcon;
- (void)onTapView:(id)a0;
- (void).cxx_destruct;

@end
