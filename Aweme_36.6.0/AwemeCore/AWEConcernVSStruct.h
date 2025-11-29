@class NSString;

@interface AWEConcernVSStruct : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long vsDistributeType;
@property (copy, nonatomic) NSString *insertTaskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
