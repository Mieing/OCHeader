@class NSDictionary, NSString;

@interface AWEIMGroupChatJoinPanelModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *rawDictionary;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *msgid;
@property (copy, nonatomic) NSString *secActivityInfo;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *secretType;
@property (copy, nonatomic) NSString *shareScene;
@property (copy, nonatomic) NSString *sourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;

@end
