@class FinderLiveBattleInfo, NSString;

@interface MMFinderLiveConnectMicJoinLiveBattleInfoWrap : NSObject

@property (retain, nonatomic) FinderLiveBattleInfo *battleInfoFromJoinLive;
@property (nonatomic) unsigned int receiveBattleInfoTime;
@property (retain, nonatomic) NSString *micSessionId;
@property (retain, nonatomic) NSString *vroomId;

- (void).cxx_destruct;

@end
