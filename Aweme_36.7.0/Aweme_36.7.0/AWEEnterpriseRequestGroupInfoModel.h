@class NSString, AWEEnterpriseRequestTargetGroupModel;

@interface AWEEnterpriseRequestGroupInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *statusMsg;
@property (nonatomic) BOOL noValidGroups;
@property (retain, nonatomic) AWEEnterpriseRequestTargetGroupModel *targetGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
