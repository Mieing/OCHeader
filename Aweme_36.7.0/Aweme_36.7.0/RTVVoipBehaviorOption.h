@class NSString, NSArray;

@interface RTVVoipBehaviorOption : JSONModel <RTVBehaviorOptionProtocol>

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) BOOL isFriend;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSArray *userIDs;
@property (copy, nonatomic) NSArray *conversationIDs;
@property (copy, nonatomic) NSString *inviteText;
@property (nonatomic) BOOL needCreateGroup;
@property (nonatomic) BOOL forbidAutoShowInvitePanel;
@property (nonatomic) BOOL enterRoomAutoInvite;
@property (nonatomic) int blendWithCurrentVoip;
@property (copy, nonatomic) NSString *invokeSource;
@property (nonatomic) BOOL forceCloseLiveRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelToJSONDictionary;
+ (id)keyMapperKeys;
+ (id)key;

- (void)setUserIDsWithNSString:(id)a0;
- (id)JSONObjectForUserIDs;
- (void)setConversationIDsWithNSString:(id)a0;
- (id)JSONObjectForConversationIDs;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
