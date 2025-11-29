@class NSString, AWEURLModel;

@interface AWELongVideoActorInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *avatar;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *role;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
