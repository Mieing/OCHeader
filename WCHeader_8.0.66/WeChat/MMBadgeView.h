@class UILabel, UIColor, NSString;

@interface MMBadgeView : UIImageView

@property (retain, nonatomic) UILabel *badgeLabel;
@property (nonatomic) double badgeFontSize;
@property (nonatomic) struct CGSize { double width; double height; } badgeInset;
@property (nonatomic) unsigned long long shape;
@property (retain, nonatomic) UIColor *bgColor;
@property (nonatomic) int maxCount;
@property (retain, nonatomic) NSString *maxCountTip;
@property (copy, nonatomic) id /* block */ shapeChangeBlock;

+ (id)smallRedDot;
+ (id)liveSmallRedDot;
+ (double)liveSmallRedDotLen;
+ (id)redDotWithNumber:(unsigned long long)a0;
+ (id)dotWithNumber:(unsigned long long)a0 color:(id)a1;
+ (id)NEWRedDot;

- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)setAlpha:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)sendSubviewToBack:(id)a0;
- (void)bringSubviewToFront:(id)a0;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)updateShape:(unsigned long long)a0;
- (void)setValue:(unsigned long long)a0;
- (void)innerSetCircleShape;
- (void)innerSetBadgeShape;
- (void)setString:(id)a0;
- (void)setAsNew;
- (void)setAsSmallDot;
- (void)setAsSmallDotForChatSession;
- (void)setAsSmallDotForLiveSession;
- (void)setCircleDotWithDiameter:(double)a0;
- (void)removeSmallDot;
- (void)setTextColor:(id)a0;
- (void)updateWithFontSize:(double)a0;
- (void)updateWithContentInset:(struct CGSize { double x0; double x1; })a0;
- (void)updateWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)useStaticSize;
- (double)pixelAlignedCeil:(double)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isPureInteger:(id)a0;
- (id)redDotImageWithDiameter:(double)a0;
- (void)setRedDotImageWithDiameter:(double)a0 shouldStretch:(BOOL)a1;
- (id)cacheColorKeyForCurrentBadge;
- (id)strechBadgeImage:(id)a0;
- (void).cxx_destruct;

@end
