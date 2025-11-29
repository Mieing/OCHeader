@class NSString, NSNumber;

@interface WCFinderMsgChatContentReporter : NSObject

@property (nonatomic) unsigned long long enterTimeInMs;
@property (nonatomic) BOOL needReport;
@property (retain, nonatomic) NSString *sourceFeed;
@property (nonatomic) unsigned int myAccountType;
@property (nonatomic) unsigned long long fromCommentScene;
@property (retain, nonatomic) NSString *talkerUsername;
@property (retain, nonatomic) NSString *chatName;
@property (retain, nonatomic) NSString *feedID;
@property (retain, nonatomic) NSString *chatListSessionid;
@property (readonly, nonatomic) NSString *chatSessionid;
@property (retain, nonatomic) NSNumber *reddotCount;
@property (nonatomic) unsigned int newReceiveMsgCount;
@property (nonatomic) unsigned int newSendMsgCount;
@property (nonatomic) unsigned int openChatInfoCount;
@property (nonatomic) BOOL fromPrivateMsgSessionList;
@property (nonatomic) BOOL shouldUpdateSessionInfo;
@property (nonatomic) int userpageEnterType;
@property (nonatomic) int sourceType;
@property (nonatomic) int fromFeedScene;

- (id)initWithCommentScene:(unsigned long long)a0;
- (id)initWithCommentScene:(unsigned long long)a0 sourceFeed:(id)a1;
- (id)initWithChatListSessionId:(id)a0 reddotCount:(id)a1;
- (void)copyInfosFromReporter:(id)a0;
- (void)enterViewController;
- (void)quitAndReport;
- (void).cxx_destruct;

@end
