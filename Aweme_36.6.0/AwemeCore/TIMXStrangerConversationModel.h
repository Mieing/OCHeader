@class NSString, NSOrderedSet, NSDictionary, NSDate, TIMXStrangerMessageModel;

@interface TIMXStrangerConversationModel : MTLModel <TIMXStrangerConversationProtocol>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long shortID;
@property (nonatomic) long long unreadCount;
@property (retain, nonatomic) NSOrderedSet *someParticipants;
@property (copy, nonatomic) NSDictionary *ext;
@property (copy, nonatomic) NSDictionary *sharedSyncedExt;
@property (retain, nonatomic) TIMXStrangerMessageModel *lastMessage;
@property (retain, nonatomic) NSDate *updatedAt;
@property (nonatomic) BOOL bottomConversation;
@property (nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)initWithRootObject:(id)a0 fromPBObject:(id)a1;
- (id)initWithRootObject:(id)a0 fromDBObject:(id)a1;
- (void).cxx_destruct;

@end
