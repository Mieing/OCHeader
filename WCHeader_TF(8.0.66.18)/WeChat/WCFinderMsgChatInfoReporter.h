@class NSString;

@interface WCFinderMsgChatInfoReporter : NSObject

@property (nonatomic) BOOL needReport;
@property (retain, nonatomic) NSString *chatSessionId;
@property (nonatomic) unsigned int myAccountType;
@property (retain, nonatomic) NSString *chatName;
@property (retain, nonatomic) NSString *talkerUsername;
@property (nonatomic) BOOL rejectMsgStatus;
@property (nonatomic) unsigned int openChatInfoCount;
@property (nonatomic) unsigned int clearMsgHistoryClickCount;
@property (nonatomic) unsigned int complianClickCount;

- (void)enterViewController;
- (void)quitAndReport;
- (void).cxx_destruct;

@end
