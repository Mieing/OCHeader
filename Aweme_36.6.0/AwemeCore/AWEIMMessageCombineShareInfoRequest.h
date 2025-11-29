@class NSArray, NSString, AWEIMCombineShareMessage;

@interface AWEIMMessageCombineShareInfoRequest : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIMCombineShareMessage *combineShareMessage;
@property (nonatomic) long long originConversationId;
@property (nonatomic) long long secConversationId;
@property (nonatomic) long long secMessageId;
@property (nonatomic) BOOL hasData;
@property (copy, nonatomic) NSArray *contentSecMessageIdList;
@property (copy, nonatomic) NSArray *accessChain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
