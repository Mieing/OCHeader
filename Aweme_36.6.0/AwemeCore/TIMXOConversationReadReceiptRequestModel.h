@class NSString;
@protocol TIMXMessageModelProtocol;

@interface TIMXOConversationReadReceiptRequestModel : NSObject <IESIMConversationReadReceiptRequestModelProtocol>

@property (retain, nonatomic) id<TIMXMessageModelProtocol> message;
@property (nonatomic) long long convShortID;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *messageID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithConvID:(id)a0 convShortID:(long long)a1 messageID:(id)a2;

- (void).cxx_destruct;

@end
