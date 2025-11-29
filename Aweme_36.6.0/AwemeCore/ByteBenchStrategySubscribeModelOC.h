@class NSString;

@interface ByteBenchStrategySubscribeModelOC : NSObject

@property (copy, nonatomic) NSString *feature;
@property (copy, nonatomic) NSString *strategy;
@property (nonatomic) long long valueType;
@property (retain, nonatomic) id defaultValue;
@property (copy, nonatomic) NSString *subSpace;

- (id)initWithFeature:(id)a0 strategy:(id)a1 subSpace:(id)a2 valueType:(long long)a3 defaultValue:(id)a4;
- (void).cxx_destruct;

@end
