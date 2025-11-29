@class NSString, NSDate;

@interface IESIMThirdPartyBizMessage : NSObject <IESIMThirdPartyMessageProtocol>

@property long long serverMessageID;
@property long long indexInConversation;
@property (retain) NSDate *createdAt;
@property (retain) NSString *hint;
@property (copy) NSString *belongingConversationIdentifier;
@property int bizId;
@property (retain) NSString *content;
@property (retain) NSString *ext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConversationId:(id)a0 metaInfo:(id)a1;
- (void).cxx_destruct;

@end
