@class NSArray;

@interface IESLiveBackGroundCutInfo : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } offSetRect;
@property (copy, nonatomic) NSArray *slots;
@property (nonatomic) double radius;

- (void).cxx_destruct;
- (id)init;

@end
