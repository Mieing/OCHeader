@class NSString;

@interface AFDIMChatMoveToFriendsSettings : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long showIntervalMinCount;
@property (nonatomic) long long hitExitThreshold;
@property (nonatomic) long long exitCount;
@property (nonatomic) long long dismissSecondCount;
@property (nonatomic) long long bubbleDelayTime;
@property (nonatomic) BOOL bubbleTextShowNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;

@end
