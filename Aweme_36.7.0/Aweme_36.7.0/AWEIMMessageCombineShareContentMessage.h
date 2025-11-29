@class NSString, NSDictionary, NSDate, NSNumber;
@protocol IESIMReferMessageInfoProtocol, IESIMMessageEditInfoProtocol;

@interface AWEIMMessageCombineShareContentMessage : MTLModel <MTLJSONSerializing, IESIMMessageProtocol, NSCoding>

@property (retain, nonatomic) NSDictionary *ext;
@property (retain) NSString *identifier;
@property (retain) NSString *belongingConversationIdentifier;
@property (retain) NSString *threadId;
@property long long parentConversationShortId;
@property (retain) NSDictionary *content;
@property BOOL recalled;
@property long long recallerRole;
@property (retain) NSDictionary *recalledContent;
@property (retain) NSNumber *serverMessageID;
@property (retain) NSDate *createdAt;
@property (retain) NSDate *serverCreatedAt;
@property long long messageType;
@property long long sender;
@property (nonatomic) BOOL isInvalided;
@property (retain) NSString *senderSecID;
@property long long hintType;
@property long long status;
@property (retain) NSDictionary *syncedExt;
@property (retain) NSDictionary *syncedExtInternal;
@property (retain) NSDictionary *localExt;
@property (retain) NSDictionary *properties;
@property (retain) id<IESIMReferMessageInfoProtocol> referMessageInfo;
@property (nonatomic) BOOL isEmptyMessage;
@property (nonatomic) long long version;
@property (nonatomic) long long indexV2;
@property (retain, nonatomic) NSString *degradeInfo;
@property (nonatomic) long long secConversationId;
@property (copy, nonatomic) NSString *realConversationId;
@property (copy, nonatomic) NSString *parentMsgId;
@property (nonatomic) long long parentMsgCombineShareVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<IESIMMessageEditInfoProtocol> editInfo;

- (long long)pullIndex;
- (void)setLocalExtEntry:(id)a0 value:(id)a1 completion:(id /* block */)a2;
- (long long)aweType;
- (void)setLocalExtWithKeys:(id)a0 values:(id)a1 completion:(id /* block */)a2;
- (void)deleteWithMode:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)deleteWithMode:(unsigned long long)a0 conversation:(id)a1 completion:(id /* block */)a2;
- (void)recallMessageWithCompletion:(id /* block */)a0;
- (void)markMessageWithActionType:(unsigned long long)a0 doAction:(BOOL)a1 sortTime:(long long)a2 completion:(id /* block */)a3;
- (id)intervalConfig;
- (id)p_cacheKey;
- (id)initWithContentDic:(id)a0;
- (id)initWithSubMessage:(id)a0;
- (BOOL)needRefreshStatusWith:(id)a0;
- (void)updateServerMessageId:(id)a0;
- (void)updateCacheKey;
- (void)updateMsgStatus:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)orderIndex;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
