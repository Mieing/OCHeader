@class CAMediaTimingFunction, UIView;

@interface WCTimeLineAdLookbookCardBrandNewAnimationObject : NSObject

@property (weak, nonatomic) UIView *relatedView;
@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) struct CGPoint { double x; double y; } fromPosition;
@property (nonatomic) struct CGPoint { double x; double y; } toPosition;
@property (nonatomic) struct CGSize { double width; double height; } fromSize;
@property (nonatomic) struct CGSize { double width; double height; } toSize;
@property (nonatomic) double cornerRadius;

- (void).cxx_destruct;

@end
