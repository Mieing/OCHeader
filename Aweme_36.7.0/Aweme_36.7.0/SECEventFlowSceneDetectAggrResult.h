@class NSArray, NSDictionary;

@interface SECEventFlowSceneDetectAggrResult : NSObject <NSCoding>

@property (copy, nonatomic) NSArray *hitScene;
@property (copy, nonatomic) NSDictionary *extractInfos;

+ (id)stringParamsValue:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
