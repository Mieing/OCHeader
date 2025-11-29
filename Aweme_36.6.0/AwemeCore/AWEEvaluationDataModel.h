@class NSString, NSArray;

@interface AWEEvaluationDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *measurement;
@property (nonatomic) double groupPercent;
@property (copy, nonatomic) NSArray *samples;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)samplesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
