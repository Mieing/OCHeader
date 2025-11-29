@class NSString;

@interface AWEAdGQVideoInfoRequirementModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long updateType;
@property (copy, nonatomic) NSString *reqID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
