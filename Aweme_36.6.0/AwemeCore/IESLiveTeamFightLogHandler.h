@protocol IESLiveTeamFightBaseProvider;

@interface IESLiveTeamFightLogHandler : NSObject

@property (nonatomic) long long teamFightType;
@property (weak, nonatomic) id<IESLiveTeamFightBaseProvider> provider;
@property (nonatomic) BOOL isAnchor;

- (void)logInfoWithCategory:(long long)a0 event:(id)a1 extra:(id)a2;
- (void)logErrorWithCategory:(long long)a0 event:(id)a1 extra:(id)a2;
- (void)logWithLevel:(unsigned long long)a0 category:(long long)a1 event:(id)a2 extra:(id)a3;
- (id)teamFightStatusStr;
- (id)logCategoryStr:(long long)a0;
- (id)initWithTeamFightType:(long long)a0 diContext:(id)a1;
- (void).cxx_destruct;

@end
