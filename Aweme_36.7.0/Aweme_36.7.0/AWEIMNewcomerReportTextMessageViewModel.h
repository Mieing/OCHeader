@class NSArray, AWEIMMessageConversation;
@protocol IESIMMessageProtocol;

@interface AWEIMNewcomerReportTextMessageViewModel : AWEIMTextMessageViewModel {
    AWEIMMessageConversation *_conversation;
}

@property (retain, nonatomic) id<IESIMMessageProtocol> iesMsg;
@property (nonatomic) BOOL disableRequest;
@property (nonatomic) unsigned long long newcomerReportType;
@property (nonatomic) BOOL hasWelcome;
@property (retain, nonatomic) NSArray *welcomerUrlList;

- (void)setupWithMessage:(id)a0;
- (void)cellAppear;
- (void)tapWelcome;
- (void)setupNewcomerReportTypeReport:(id)a0;
- (void)report_cellAppear;
- (void)report_tapWelcome;
- (void)report_updateDataWithAWEIMNewcomerWelcomerListInfo:(id)a0;
- (BOOL)report_isWelcomeOvertime;
- (void)report_tapWelcomeTrackerWithHasWelcome:(BOOL)a0;
- (void).cxx_destruct;
- (id)conversation;
- (void)dealloc;
- (void)setConversation:(id)a0;

@end
