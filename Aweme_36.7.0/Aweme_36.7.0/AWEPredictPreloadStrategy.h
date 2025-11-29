@class NSNumber, NSArray, NSString;

@interface AWEPredictPreloadStrategy : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *defaultValue;
@property (copy, nonatomic) NSArray *labelIndexMapping;
@property (copy, nonatomic) NSArray *plan;
@property (retain, nonatomic) NSNumber *actionCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)planJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
