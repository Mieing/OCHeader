@class NSString;

@interface AFDLessRecommendManager : NSObject <AWEUserMessage, AFDLessRecommendManagerProtocol>

@property (nonatomic) BOOL shouldLessRecommend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filteredRecommendWithDatasource:(id)a0 scene:(unsigned long long)a1;
+ (void)deleteRecommendAwemeIfNeededWithDatasource:(id)a0 currentIndex:(long long)a1 completedBlock:(id /* block */)a2;
+ (id)shareIntance;
+ (BOOL)shouldLessRecommend;
+ (BOOL)shouldLessRecommendWithAwemeModel:(id)a0;
+ (BOOL)isUnfollowedAcquaintanceWithAwemeModel:(id)a0;
+ (void)postUserOption:(BOOL)a0 completion:(id /* block */)a1;
+ (void)trackFromSettingsWithEventType:(id)a0 enterFrom:(id)a1;

@end
