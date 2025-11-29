@class NSString, UIColor;

@interface DUXTextTag : DUXTag <IESIMTagViewProtocol>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *contentColor;
@property (nonatomic) double contentIconWidth;
@property (nonatomic) double horizentalContentEdgeInset;
@property (nonatomic) double contentHorizentalMargin;
@property (copy, nonatomic) id /* block */ iconProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double maxScale;
@property (nonatomic) long long style;
@property (nonatomic) long long sizeStyle;
@property (nonatomic) long long fontWeight;

+ (long long)duxTextTagStyleWithIESIMStyle:(long long)a0;
+ (long long)duxTextTagSizeStyleWithIESIMStyle:(long long)a0;

- (void)setEnlargeType:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enlargeType:(unsigned long long)a1;
- (id)initWithStyle:(long long)a0 sizeStyle:(long long)a1;
- (id)initWithStyle:(long long)a0 sizeStyle:(long long)a1 title:(id)a2 enlargeType:(unsigned long long)a3;
- (id)initWithStyle:(long long)a0 sizeStyle:(long long)a1 title:(id)a2;
- (void)intrinsicActionSizeStyle;
- (void)intrinsicActionStyle;
- (double)intrinsicIconSize;
- (double)p_intrinsicContentHeight;
- (BOOL)p_showIconImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
