@class NSString;

@interface AWESiriSuggestHelper : HTSService <AWESiriSuggestProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userActivityWithType:(id)a0 title:(id)a1 eligibleForSearch:(BOOL)a2 eligibleForHandoff:(BOOL)a3 eligibleForPrediction:(BOOL)a4 contentDescription:(id)a5 uniqueIDIfNeeded:(id)a6 userInfo:(id)a7 model:(id)a8;
+ (id)userActivityWithSceneType:(id)a0 userInfo:(id)a1 uniqueIDIfNeeded:(id)a2 configModel:(id)a3;
+ (id)userActivityWithSceneType:(id)a0 userInfo:(id)a1 siriConfigModel:(id)a2;

- (void)donateUserActivityWithType:(id)a0 pushConfigModel:(id)a1 userInfo:(id)a2 uniqueIDIfNeeded:(id)a3 completion:(id /* block */)a4;
- (void)donateUserActivityWithType:(id)a0 siriConfigModel:(id)a1 userInfo:(id)a2 completion:(id /* block */)a3;
- (void)clearAllSiriSuggestData:(id)a0;
- (void)clearSiriSuggestDataWithIdentifier:(id)a0;
- (void)clearSiriSuggestDataWithType:(id)a0 expiredIDs:(id)a1;

@end
