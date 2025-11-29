@class NSString;

@interface TIMXCommandMessage : NSObject <IESIMCommandMessageProtocol, TIMXCommandMessageProtocol>

@property (readonly) NSString *content;
@property (readonly) int messageType;
@property (readonly) NSString *conversationId;
@property (readonly, nonatomic) long long serverMessageId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int messageType;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) long long serverMessageId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
