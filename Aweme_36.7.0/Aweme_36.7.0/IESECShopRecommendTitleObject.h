@class UIFont, NSString, UIColor, IESECTracker, NSDictionary;

@interface IESECShopRecommendTitleObject : NSObject <IGListDiffable>

@property (copy, nonatomic) NSString *recommendText;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic, getter=isShowPattern) BOOL showPattern;
@property (nonatomic) double yOffset;
@property (retain, nonatomic) IESECTracker *tracker;
@property (copy, nonatomic) NSString *showTrack;
@property (copy, nonatomic) NSDictionary *showParams;
@property (nonatomic) double marginTop;
@property (nonatomic) double marginBottom;
@property (nonatomic) BOOL enableNewStyle;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (void).cxx_destruct;
- (id)init;

@end
