@class WCFinderMsgSessionInfo;

@interface WCFinderMsgSessionUpdateResult : NSObject

@property (nonatomic) BOOL isInValidUpdate;
@property (nonatomic) BOOL isSenderForMsg;
@property (nonatomic) BOOL isInAsFansSessionList;
@property (nonatomic) BOOL isInAsAliasSessionList;
@property (nonatomic) BOOL isInAsAuthorSessionList;
@property (nonatomic) BOOL normalSessionHasUpdated;
@property (nonatomic) BOOL greetSessionHasUpdated;
@property (nonatomic) BOOL isInGreetSessionListOnly;
@property (nonatomic) BOOL isGreetSessionUnreadStatusUpdated;
@property (retain, nonatomic) WCFinderMsgSessionInfo *sessionInfo;

- (void).cxx_destruct;

@end
