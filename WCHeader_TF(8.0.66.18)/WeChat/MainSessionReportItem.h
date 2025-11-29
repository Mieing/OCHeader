@class NSMutableSet, NSMutableArray;

@interface MainSessionReportItem : NSObject

@property (nonatomic) BOOL isFirstReportExit;
@property (nonatomic) long long chatType;
@property (nonatomic) unsigned long long exitTime;
@property (nonatomic) unsigned long long enterTime;
@property (nonatomic) BOOL isMute;
@property (nonatomic) long long unreadMsgCountAtEnter;
@property (nonatomic) long long unreadSessionCountAtEnter;
@property (nonatomic) long long unreadMsgCountAtExit;
@property (nonatomic) long long unreadSessionCountAtExit;
@property (nonatomic) long long recvMsgCount;
@property (nonatomic) long long clearMsgCount;
@property (nonatomic) long long maxEntrySessionIndex;
@property (retain, nonatomic) NSMutableSet *recvMsgSessions;
@property (retain, nonatomic) NSMutableSet *enterSessions;
@property (retain, nonatomic) NSMutableSet *clearUnreadSessions;
@property (nonatomic) long long topSessionCount;
@property (retain, nonatomic) NSMutableArray *sessionDetails;

- (id)init;
- (void)reset;
- (void)reportAt:(long long)a0;
- (id)genSessionDetails;
- (void).cxx_destruct;

@end
