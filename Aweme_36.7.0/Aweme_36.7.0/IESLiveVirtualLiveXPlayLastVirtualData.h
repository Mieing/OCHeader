@class NSString;

@interface IESLiveVirtualLiveXPlayLastVirtualData : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *lastSceneId;
@property (copy, nonatomic) NSString *lastAvatarId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
