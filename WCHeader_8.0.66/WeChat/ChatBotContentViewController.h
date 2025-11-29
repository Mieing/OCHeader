@class NSString;

@interface ChatBotContentViewController : BaseMsgContentViewController

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int enterScene;
@property (nonatomic) BOOL skipSessionIn;
@property (nonatomic) BOOL skipCloseReport;

- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)tapImage_NodeView:(id)a0 needEditImage:(BOOL)a1;
- (void)tapAppNodeView:(id)a0;
- (void)OnClickAttachmentButtonAction;
- (void)openMediaBrowser;
- (void)openCameraController;
- (void)onStreamVoiceInputButtonClick;
- (void)openFileBrowser;
- (id)getChatBotSessionReportInfo;
- (void)registerYReportSdk;
- (void)reportSessionIn;
- (void)reportForEventId:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
