@class NSString, NSArray;

@interface AWEIMConversationHintInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long hintType;
@property (copy, nonatomic) NSString *highlightedPrefixString;
@property (copy, nonatomic) NSString *hintString;
@property (nonatomic) long long expireTimeInMs;
@property (nonatomic) long long createTimeInMs;
@property (copy, nonatomic) NSArray *invisibleUsers;
@property (copy, nonatomic) NSArray *invisibleRoles;
@property (copy, nonatomic) NSString *cid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)hintInfoFromCon:(id)a0;
+ (id)hintInfosFromCon:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValidConversationHintInfoWithCon:(id)a0;
- (BOOL)__isValidHintTypeConversationHintInfo;
- (BOOL)__isVisibleHintInfoWithCon:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
