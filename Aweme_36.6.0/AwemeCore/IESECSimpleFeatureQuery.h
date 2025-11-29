@class NSString, NSDictionary;

@interface IESECSimpleFeatureQuery : NSObject

@property (copy, nonatomic) NSString *featureName;
@property (copy, nonatomic) NSString *businessName;
@property (nonatomic) long long sampleRange;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) unsigned long long returnType;

- (id)initWithFeatureName:(id)a0 businessName:(id)a1 extraParams:(id)a2 returnType:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)init;

@end
