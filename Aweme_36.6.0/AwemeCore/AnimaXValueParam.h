@class NSString;

@interface AnimaXValueParam : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *internalStringValue;
@property (nonatomic) double internalNumberValue;
@property (nonatomic) BOOL internalBooleanValue;
@property (nonatomic) struct AnimaXCoordinate { double x; double y; double z; } internalCoordinateValue;
@property (nonatomic) unsigned int internalColorValue;
@property (nonatomic) long long internalFilterMode;
@property (nonatomic) long long internalTargetFrame;
@property (readonly, nonatomic) BOOL hasTargetFrame;
@property (readonly, nonatomic) long long targetFrame;
@property (readonly, nonatomic) BOOL isString;
@property (readonly, nonatomic) BOOL isNumber;
@property (readonly, nonatomic) BOOL isBoolean;
@property (readonly, nonatomic) BOOL isCoordinate;
@property (readonly, nonatomic) BOOL isColor;
@property (readonly, nonatomic) BOOL isColorFilter;
@property (readonly, nonatomic) BOOL isNull;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) double numberValue;
@property (readonly, nonatomic) BOOL booleanValue;
@property (readonly, nonatomic) double x;
@property (readonly, nonatomic) double y;
@property (readonly, nonatomic) unsigned int colorValue;
@property (readonly, nonatomic) long long filterMode;
@property (readonly, nonatomic) double z;

+ (id)valueParamWithNativeValue:(const struct Value { void /* function */ **x0; } *)a0;
+ (id)paramWithString:(id)a0 targetFrame:(long long)a1;
+ (id)paramWithNumber:(double)a0 targetFrame:(long long)a1;
+ (id)paramWithBoolean:(BOOL)a0 targetFrame:(long long)a1;
+ (id)paramWithCoordinateX:(double)a0 y:(double)a1 targetFrame:(long long)a2;
+ (id)paramWithCoordinateX:(double)a0 y:(double)a1 z:(double)a2 targetFrame:(long long)a3;
+ (id)paramWithColor:(unsigned int)a0 targetFrame:(long long)a1;
+ (id)paramWithColorFilter:(unsigned int)a0 mode:(long long)a1 targetFrame:(long long)a2;
+ (id)paramWithString:(id)a0;
+ (id)paramWithNumber:(double)a0;
+ (id)paramWithBoolean:(BOOL)a0;
+ (id)paramWithCoordinateX:(double)a0 y:(double)a1;
+ (id)paramWithCoordinateX:(double)a0 y:(double)a1 z:(double)a2;
+ (id)paramWithColor:(unsigned int)a0;
+ (id)paramWithColorFilter:(unsigned int)a0 mode:(long long)a1;
+ (id)nullParam;
+ (id)valueParamWithNative:(const void *)a0;

- (struct unique_ptr<lynx::animax::AnimaXValueParam, std::default_delete<lynx::animax::AnimaXValueParam>> { struct AnimaXValueParam *x0; })toNative;
- (id)initWithType:(long long)a0 targetFrame:(long long)a1;
- (void).cxx_destruct;
- (id)description;

@end
