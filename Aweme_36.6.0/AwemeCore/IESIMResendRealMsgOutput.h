@class NSString;

@interface IESIMResendRealMsgOutput : NSObject <IESIMSendAttachmentNodeOutput>

@property (copy, nonatomic) NSString *messageID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fillInOutputContext:(id)a0;
- (void).cxx_destruct;

@end
