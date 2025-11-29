@class NSString;

@interface ChatBotSessionDetailInfoViewController : AddContactToChatRoomViewController

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int enterScene;

- (void)viewDidLoad;
- (void)openContactInfo:(id)a0;
- (void)onEditAndSearch;
- (void)setMuteStatus;
- (void)setTopSession;
- (void)onClear:(id)a0;
- (void)onDelete;
- (void)addMember;
- (void)modifyContactInfoViewController:(id)a0;
- (void)registerYReportSdk;
- (void)reportForEventId:(id)a0 params:(id)a1;
- (void)reportExposureYuanBaoErrorToastCell;
- (id)getReportParams;
- (void).cxx_destruct;

@end
