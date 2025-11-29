@class NSString, NSDictionary, NSDate;
@protocol TIMXReferMessageInfoProtocol;

@interface TIMXStrangerMessageModel : MTLModel <TIMXStrangerMessageProtocol>

@property (retain, nonatomic) id<TIMXReferMessageInfoProtocol> referMessageInfo;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long serverMessageID;
@property (copy, nonatomic) NSString *belongingConversationIdentifier;
@property (nonatomic) long long sender;
@property (copy, nonatomic) NSString *senderSecID;
@property (copy, nonatomic) NSDictionary *content;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSDictionary *syncedExt;
@property (nonatomic) long long orderIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootObject:(id)a0 fromPBObject:(id)a1;
- (id)initWithRootObject:(id)a0 fromDBObject:(id)a1;
- (void).cxx_destruct;

@end
