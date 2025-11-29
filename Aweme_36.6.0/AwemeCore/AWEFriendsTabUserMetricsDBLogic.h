@class NSString, NSMutableDictionary, IESWCDatabase;

@interface AWEFriendsTabUserMetricsDBLogic : NSObject <AWEUserMessage, AWEFriendsTabUserMetricsDBLogicProtocol>

@property (retain, nonatomic) IESWCDatabase *database;
@property (retain, nonatomic) NSMutableDictionary *recordsEventsPV;
@property (nonatomic) BOOL wcdbToTwo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)wcdbFilePath;
- (long long)countEventsOfType:(long long)a0 since:(double)a1;
- (void)initializeDatabase;
- (id)getEventsOfType:(long long)a0 since:(double)a1;
- (id)getAllEvents:(long long)a0;
- (void).cxx_destruct;
- (void)recordEvent:(id)a0;
- (id)init;
- (id)tableName;
- (void)deleteEventsOlderThan:(long long)a0;

@end
