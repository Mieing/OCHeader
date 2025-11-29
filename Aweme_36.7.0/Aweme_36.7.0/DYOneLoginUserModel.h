@class NSString, NSDictionary;

@interface DYOneLoginUserModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long lastLoginTime;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *screenName;
@property (copy, nonatomic) NSString *secUID;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
