@class WCFinderLiveMsgSessionInfo;

@interface WCFinderLiveMsgSessionUpdateResult : NSObject

@property (nonatomic) BOOL isInValidUpdate;
@property (nonatomic) BOOL isSenderForMsg;
@property (nonatomic) BOOL sessionHasUpdated;
@property (retain, nonatomic) WCFinderLiveMsgSessionInfo *sessionInfoById;

- (void).cxx_destruct;

@end
