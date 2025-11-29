@class NSArray;

@interface AWERelatedRecommendGradientConfig : NSObject {
    void /* function */ gradientColors;
}

@property (nonatomic) BOOL enable;
@property (nonatomic, copy) NSArray *gradientColors;
@property (nonatomic) double topPadding;

- (id)initWithEnable:(BOOL)a0 gradientColors:(id)a1 topPadding:(double)a2;
- (void).cxx_destruct;
- (id)init;

@end
