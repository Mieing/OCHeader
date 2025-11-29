@class NSArray, WCTableLiveSessionStorage, WCFinderLiveMsgSessionInfo;

@interface WCFinderLiveMsgSessionFindResult : NSObject

@property (retain, nonatomic) WCFinderLiveMsgSessionInfo *sessionInfoById;
@property (retain, nonatomic) NSArray *sessionInfos;
@property (retain, nonatomic) WCTableLiveSessionStorage *sessionStorage;

- (void).cxx_destruct;

@end
