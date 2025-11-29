@class NSString, LLDitoStyle;

@interface LLDitoDecorationModel : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } decorationViewFrame;
@property (retain, nonatomic) LLDitoStyle *decorationStyle;
@property (copy, nonatomic) NSString *nodeTag;
@property (nonatomic) long long zPositionTag;

- (void).cxx_destruct;

@end
