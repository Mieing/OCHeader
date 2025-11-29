@class NSString, DitoStyle;

@interface DitoDecorationModel : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } decorationViewFrame;
@property (retain, nonatomic) DitoStyle *decorationStyle;
@property (copy, nonatomic) NSString *nodeTag;
@property (nonatomic) long long zPositionTag;

- (void).cxx_destruct;

@end
