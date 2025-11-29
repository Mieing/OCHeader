@class NSString;

@interface IESIMSendAttachmentDBHandler : NSObject <IESIMSendMsgFlowNotification>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowNodeEndWithInput:(id)a0 output:(id)a1 duration:(long long)a2 error:(id)a3;
- (id)init;
- (void)dealloc;

@end
