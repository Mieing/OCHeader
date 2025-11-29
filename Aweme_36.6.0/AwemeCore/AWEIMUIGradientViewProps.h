@class NSString, NSArray;

@interface AWEIMUIGradientViewProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;

- (void).cxx_destruct;

@end
