@class NSString, IESEffectURLModel;

@interface IESSimpleVideoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) IESEffectURLModel *coverURL;
@property (copy, nonatomic) IESEffectURLModel *playURL;
@property (copy, nonatomic) NSString *groupID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
