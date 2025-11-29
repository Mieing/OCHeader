@class NSString, UIImageView;

@interface WCFinderBothSideIconButton : WCFinderMaskButton <WCFinderFlexViewLayoutHash>

@property (retain, nonatomic) NSString *darkLeadingIconUrl;
@property (nonatomic) unsigned long long textContentHash;
@property (retain, nonatomic) UIImageView *leadingIcon;
@property (retain, nonatomic) NSString *leadingIconUrl;
@property (nonatomic) double leadingIconPadding;
@property (retain, nonatomic) NSString *mainIconUrl;
@property (nonatomic) struct CGSize { double width; double height; } leadingIconSize;
@property (nonatomic) struct CGSize { double width; double height; } tailIconSize;
@property (nonatomic) double iconPadding;
@property (nonatomic) BOOL revertLayout;
@property (nonatomic) BOOL hiddenImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayout;
- (void)setLeadingIconUrl:(id)a0 darkIconUrl:(id)a1;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })titleSizeThatFit:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)layoutDepHashValue;
- (void).cxx_destruct;

@end
