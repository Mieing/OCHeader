@class LSIMSendMessage;

@interface LSIMInternalSendMessage : BDECPigeonMessage

@property (retain, nonatomic) LSIMSendMessage *sendMessage;

- (id)bizExt;
- (id)pigeonBizType;
- (long long)senderRoleType;
- (id)originExt;
- (id)bizRole;
- (id)initWithSendMessage:(id)a0;
- (void).cxx_destruct;
- (id)createTime;
- (id)content;
- (id)sender;

@end
