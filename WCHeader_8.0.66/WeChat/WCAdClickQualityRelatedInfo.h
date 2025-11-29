@interface WCAdClickQualityRelatedInfo : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } clickPoint;
@property (nonatomic) struct CGPoint { double x; double y; } clickPointToWindow;
@property (nonatomic) struct CGSize { double width; double height; } relatedViewSize;

@end
