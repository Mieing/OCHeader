@class NSString, NSArray;

@interface AWEIMGroupInviteResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bizExt;
@property (copy, nonatomic) NSString *checkExt;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long conversationShortID;
@property (copy, nonatomic) NSString *groupAvatar;
@property (copy, nonatomic) NSString *backupGroupAvatar;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) int memberCount;
@property (retain, nonatomic) NSArray *toFollowUserArray;
@property (nonatomic) long long statusCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)toFollowUserArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)checkExtDictionary;
- (void).cxx_destruct;

@end
