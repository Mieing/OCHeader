@class NSString, NSArray, NSNumber, AWEURLModel;

@interface AWEIMNewcomerWelcomerModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *uid;
@property (retain, nonatomic) NSString *secUid;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) AWEURLModel *avatarUrl;
@property (retain, nonatomic) NSArray *tags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)urlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithUserModel:(id)a0 conversation:(id)a1;
- (void).cxx_destruct;

@end
