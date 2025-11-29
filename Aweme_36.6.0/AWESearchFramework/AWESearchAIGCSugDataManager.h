@class NSString, NSMutableArray;
@protocol AWESearchAIGCSugDataManagerDelegate;

@interface AWESearchAIGCSugDataManager : NSObject

@property (weak, nonatomic) id<AWESearchAIGCSugDataManagerDelegate> delegate;
@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSMutableArray *sugDatas;
@property (nonatomic) BOOL isStarted;

- (void)startSugWithText:(id)a0;
- (void)changeSugWithText:(id)a0;
- (void)stopSug;
- (void)cleanSugDatasInSession;
- (id)allSugDatasInSession;
- (id)validSugTextWithOriginText:(id)a0;
- (void)tryRefreshSugListWithSugData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
