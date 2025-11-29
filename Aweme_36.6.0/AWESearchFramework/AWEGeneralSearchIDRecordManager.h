@class NSString, NSMutableArray;

@interface AWEGeneralSearchIDRecordManager : NSObject

@property (retain, nonatomic) NSMutableArray *searchIds;
@property (retain, nonatomic) NSMutableArray *sessionSearchIds;
@property (retain, nonatomic) NSString *lastSessionID;
@property (nonatomic) unsigned long long searchSessionRound;
@property (retain, nonatomic) NSMutableArray *sessionQuerys;

+ (id)sharedInstance;

- (void)updataSessionSearchRoundWithSessionID:(id)a0;
- (void)updataSessionSearchHistoryQuery:(id)a0 sessionID:(id)a1;
- (void)recordSearchID:(id)a0 sessionID:(id)a1;
- (id)SearchIdArrayWithinLastSession;
- (id)searchIdArray;
- (id)sessionSearchHistoryQuerys;
- (void).cxx_destruct;

@end
