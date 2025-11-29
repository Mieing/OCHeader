@class MMUIViewController, WAContactGetter;

@interface TemplateMsgExposeLogic : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) MMUIViewController *vc;
@property (retain, nonatomic) WAContactGetter *contactGetter;

- (id)initWithVC:(id)a0;
- (void)dealloc;
- (void)exposeTemplateMsg:(id)a0 extraData:(id)a1;
- (void)onExpose:(id)a0 withMsg:(id)a1 fromWeapp:(BOOL)a2 extraData:(id)a3;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onExposeMsgWithMsgId:(id)a0 appId:(id)a1 templateId:(id)a2 screenshotId:(id)a3;
- (void)onExposeMsgWithMsgId:(id)a0 username:(id)a1 templateId:(id)a2;
- (void)doOpenWebVcWithUrl:(id)a0;
- (void).cxx_destruct;

@end
