@class NSString, NSArray;

@interface AsyncEmoticonRecommendationTask : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *recSessionId;
@property (nonatomic) BOOL localTaskFinish;
@property (nonatomic) BOOL remoteTaskFinish;
@property (retain, nonatomic) NSArray *localList;
@property (retain, nonatomic) NSArray *remoteList;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) BOOL shouldSearchRemote;

- (id)init;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;

@end
