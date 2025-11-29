@class NSString, NSArray;

@interface AWEInnerPushExitRangeMappingRawModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *setId;
@property (copy, nonatomic) NSArray *groupArray;
@property (copy, nonatomic) NSArray *typeArray;
@property (copy, nonatomic) NSArray *templateIdArray;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
