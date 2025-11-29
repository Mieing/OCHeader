@interface IESECSliceXFrameAnimatableStyle : NSObject

@property (readonly, nonatomic) struct IESECSliceXTranslate { struct IESECSliceXFlexValue { float value; unsigned long long unit; } x; struct IESECSliceXFlexValue { float value; unsigned long long unit; } y; } translate;
@property (readonly, nonatomic) struct IESECSliceXScale { double x; double y; } scale;
@property (readonly, nonatomic) double rotate;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) struct IESECSliceXFlexValue { float value; unsigned long long unit; } width;
@property (readonly, nonatomic) struct IESECSliceXFlexValue { float value; unsigned long long unit; } height;

- (id)initWithDict:(id)a0;

@end
