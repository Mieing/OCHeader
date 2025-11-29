@class UIColor;

@interface AWEFollowFeedMultiCardConfig : NSObject

@property (nonatomic) double zoomOutRatio;
@property (nonatomic) long long visibleCount;
@property (nonatomic) double containerEdge;
@property (nonatomic) double cardEdge;
@property (nonatomic) double cardCornerRadius;
@property (nonatomic) double cardCornerBorderWidth;
@property (retain, nonatomic) UIColor *cardBorderColor;
@property (nonatomic) BOOL needShadow;
@property (retain, nonatomic) UIColor *cardShadowColor;
@property (nonatomic) struct CGSize { double width; double height; } cardShadowOffset;
@property (nonatomic) double cardShadowOpacity;
@property (nonatomic) double cardShadowRadius;

- (void).cxx_destruct;
- (id)init;

@end
