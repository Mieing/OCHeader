@class AWEIMMessage, IESIMExternalRefContent, NSString;
@protocol IESIMExternalRefMessageProtocol;

@interface AWEIMFeedExternalRefFakeDisplayMessage : AWEIMMessage <IESIMExternalRefMessageProtocol>

@property (retain, nonatomic) AWEIMMessage<IESIMExternalRefMessageProtocol> *realMessage;
@property (retain, nonatomic) IESIMExternalRefContent *externalRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)syncedExt;
- (id)localExt;
- (void)setSyncedExt:(id)a0;
- (BOOL)isCombineShareSubMessage;
- (void)setLocalExt:(id)a0;
- (id)initWithRealMessage:(id)a0;
- (long long)serverMessageID;
- (void).cxx_destruct;
- (id)messageID;
- (id)conversationID;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
