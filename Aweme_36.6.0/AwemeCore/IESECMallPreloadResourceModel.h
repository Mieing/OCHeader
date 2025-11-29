@class NSString, IESECMallPriorityGroupModel;

@interface IESECMallPreloadResourceModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECMallPriorityGroupModel *highGroup;
@property (retain, nonatomic) IESECMallPriorityGroupModel *mediumGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)highGroupJSONTransformer;
+ (id)mediumGroupJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
