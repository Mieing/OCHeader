@class AWEIMChatModel, NSString, NSURL, NSArray, AWEInnerPushControlModel, NSDictionary, AWEIMUser, NSNumber;
@protocol IESIMConversationProtocol;

@interface AWEIMOnlienRemindPushModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *dismissTimeInterval;
@property (retain, nonatomic) AWEInnerPushControlModel *pushControlModel;
@property (copy, nonatomic) NSString *businessType;
@property (copy, nonatomic) NSString *extraStr;
@property (copy, nonatomic) NSDictionary *payload;
@property (copy, nonatomic) NSString *o_url;
@property (retain, nonatomic) NSURL *imageUrl;
@property (retain, nonatomic) AWEIMUser *user;
@property (retain, nonatomic) AWEIMChatModel *chat;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (copy, nonatomic) NSArray *imageUrls;
@property (copy, nonatomic) NSArray *users;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)rtvCallType;
- (id)sceneGreetType;
- (BOOL)sceneGreetOnlineState;
- (id)fromSecUid;
- (long long)rtvBizType;
- (BOOL)extraIsOnlineState;
- (void).cxx_destruct;
- (double)timestamp;
- (long long)actionType;
- (long long)subactionType;
- (id)roomID;
- (id)actionText;
- (double)lastCallTime;
- (BOOL)isAggregate;

@end
