@class NSString;

@interface AWEEnterpriseRequestTargetGroupModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isInGroup;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) long long source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
