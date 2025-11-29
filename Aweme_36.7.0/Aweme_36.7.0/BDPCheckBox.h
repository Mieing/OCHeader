@class NSArray, NSMutableDictionary, NSString, NSLayoutConstraint, UIImageView;

@interface BDPCheckBox : UIControl <BDPAppearance, BDPAppearanceStyleMessage> {
    UIImageView *_imageView;
}

@property (retain, nonatomic) NSMutableDictionary *tintColorDictionary;
@property (retain, nonatomic) NSLayoutConstraint *originalWidthAnchor;
@property (retain, nonatomic) NSLayoutConstraint *originalheightAnchor;
@property (retain, nonatomic) NSLayoutConstraint *tempWidthAnchor;
@property (retain, nonatomic) NSLayoutConstraint *tempheightAnchor;
@property (nonatomic) long long status;
@property (copy, nonatomic) id /* block */ checkBlock;
@property (nonatomic) BOOL styleForNewUI;
@property (nonatomic) double pointInsideInset;
@property (copy, nonatomic) NSArray *bdp_styleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)bdp_styleForCategory:(id)a0;
+ (void)applyAppearanceStyle;

- (id)tintColorForStatus:(long long)a0;
- (void)updateDisableCheckBox;
- (void)setTintColor:(id)a0 forStatus:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (void)onTap:(id)a0;

@end
