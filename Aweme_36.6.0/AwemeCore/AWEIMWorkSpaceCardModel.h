@class NSString, AWEIMWorkSpaceCardMessage;

@interface AWEIMWorkSpaceCardModel : AWEBaseApiModel

@property (nonatomic) long long cardType;
@property (nonatomic) BOOL permission;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *icon;
@property (nonatomic) BOOL unRead;
@property (nonatomic) BOOL mute;
@property (nonatomic) long long unreadCount;
@property (copy, nonatomic) AWEIMWorkSpaceCardMessage *lastMessage;
@property (nonatomic) BOOL forceJumpNewSpace;
@property (copy, nonatomic) NSString *spaceNewSchema;

+ (id)lastMessageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
