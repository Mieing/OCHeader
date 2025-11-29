@class NSDictionary, NSArray, NSString;

@interface IESVideoBitrateFilterModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *clientFilterRequirement;
@property (retain, nonatomic) NSDictionary *serverFilterRequirement;
@property (retain, nonatomic) NSArray *forbiddenGears;
@property (retain, nonatomic) NSArray *allowGears;
@property (retain, nonatomic) NSArray *allowLadders;
@property (retain, nonatomic) NSArray *forbiddenLadders;
@property (retain, nonatomic) NSArray *forbiddenLaddersConfigList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)forbiddenLaddersConfigListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
