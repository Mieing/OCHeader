@class UIColor, NSArray, LOTBezierData, NSNumber;

@interface LOTKeyframe : NSObject

@property (readonly, nonatomic) NSNumber *keyframeTime;
@property (readonly, nonatomic) BOOL isHold;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } inTangent;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } outTangent;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } spatialInTangent;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } spatialOutTangent;
@property (readonly, nonatomic) double floatValue;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } pointValue;
@property (readonly, nonatomic) struct CGSize { double width; double height; } sizeValue;
@property (readonly, nonatomic) UIColor *colorValue;
@property (readonly, nonatomic) LOTBezierData *pathData;
@property (readonly, nonatomic) NSArray *arrayValue;

- (struct CGPoint { double x0; double x1; })_pointFromValueDict:(id)a0;
- (struct CGPoint { double x0; double x1; })_pointFromValueArray:(id)a0;
- (void)setupOutputWithData:(id)a0;
- (id)initWithLOTKeyframe:(id)a0;
- (id)_colorValueFromArray:(id)a0;
- (id)copyWithData:(id)a0;
- (void)remapValueWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)initWithValue:(id)a0;
- (id)initWithKeyframe:(id)a0;

@end
