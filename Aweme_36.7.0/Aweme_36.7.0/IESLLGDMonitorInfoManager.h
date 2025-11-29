@class HMDThreadSafeDictionary;

@interface IESLLGDMonitorInfoManager : NSObject

@property (retain, nonatomic) HMDThreadSafeDictionary *originSessions;
@property (retain, nonatomic) HMDThreadSafeDictionary *originQueries;
@property (retain, nonatomic) HMDThreadSafeDictionary *extraInfo;

+ (id)sharedManager;

- (id)getOriginSessionInfoById:(id)a0;
- (void)setOriginSessionWithId:(id)a0 infoMap:(id)a1;
- (id)getOriginQueriesInfoById:(id)a0;
- (void)setOriginQueriesWithId:(id)a0 infoMap:(id)a1;
- (id)getExtraInfoById:(id)a0;
- (void)updateExtraInfoWithId:(id)a0 infoMap:(id)a1;
- (void)recycleParamsWithId:(id)a0;
- (void)recycleAllParams;
- (void).cxx_destruct;
- (id)init;

@end
