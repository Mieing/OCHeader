@class WCTableSessionStorage, WCFinderMsgSessionInfo;

@interface WCFinderMsgSessionFindResult : NSObject

@property (retain, nonatomic) WCFinderMsgSessionInfo *sessionInfo;
@property (retain, nonatomic) WCTableSessionStorage *sessionStorage;
@property (nonatomic) BOOL isInGreetSessionList;

- (void).cxx_destruct;

@end
