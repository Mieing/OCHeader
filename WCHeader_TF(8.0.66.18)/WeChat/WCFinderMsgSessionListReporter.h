@class NSString, NSMutableSet;

@interface WCFinderMsgSessionListReporter : NSObject

@property (nonatomic) unsigned long long enterTimeInMs;
@property (nonatomic) BOOL needReport;
@property (retain, nonatomic) NSMutableSet *exposeSessionSet;
@property (retain, nonatomic) NSMutableSet *openSessionSet;
@property (nonatomic) unsigned int exposeSessionCount;
@property (nonatomic) unsigned int sessionClickCount;
@property (nonatomic) unsigned int delSessionCount;
@property (nonatomic) unsigned int myAccountType;
@property (nonatomic) BOOL isGreetSession;
@property (nonatomic) unsigned long long fromCommentScene;
@property (readonly, nonatomic) NSString *chatlistSessionid;

- (id)initWithCommentScene:(unsigned long long)a0;
- (void)copyInfosFromReporter:(id)a0;
- (void)exposeSessionWithSessionId:(id)a0;
- (void)openSessionWithSessionId:(id)a0;
- (void)deleteSessionWithSessionId:(id)a0;
- (void)enterViewController;
- (void)quitAndReport;
- (void).cxx_destruct;

@end
