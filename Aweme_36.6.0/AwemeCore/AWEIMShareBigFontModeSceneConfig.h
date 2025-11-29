@interface AWEIMShareBigFontModeSceneConfig : NSObject

@property (copy, nonatomic) id /* block */ currentValueProvider;
@property (nonatomic) double normalValue;
@property (nonatomic) double middleValue;
@property (nonatomic) double largeValue;
@property (nonatomic) double elderValue;

- (id)initWithNormalValue:(double)a0;
- (id)initWithNormalValue:(double)a0 middleValue:(double)a1 largeValue:(double)a2 elderValue:(double)a3;
- (id)initWithCurrentValueProvider:(id /* block */)a0;
- (void).cxx_destruct;

@end
