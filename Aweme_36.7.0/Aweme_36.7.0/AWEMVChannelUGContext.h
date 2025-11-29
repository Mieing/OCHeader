@class AWEDouyinSelectExtraModel, NSMutableSet, NSMutableDictionary;

@interface AWEMVChannelUGContext : NSObject

@property (retain, nonatomic) NSMutableSet *consumedInsertSet;
@property (retain, nonatomic) NSMutableDictionary *recommendMap;
@property (retain, nonatomic) NSMutableDictionary *insertMap;
@property (retain, nonatomic) AWEDouyinSelectExtraModel *douyinSelectExtraModel;
@property (nonatomic) BOOL shouldForbidRefreshFromLoginFlag;

+ (void)trackMediumVideoUGShowIfNeededWithModel:(id)a0;
+ (BOOL)hasColdInsertVideos;
+ (BOOL)hasLaunchUrl;
+ (id)recommendUGInfoPair;
+ (BOOL)p_shouldRefreshAferLoginStateChanged:(unsigned long long)a0;
+ (id)getDouyinSelectExtraModel;
+ (id)recommendUGInfo;
+ (id)gdLabelForRecommendUGInfo:(id)a0;
+ (id)consumeAndClearDiversionInsertJson;
+ (id)gdLabelForInsertJson:(id)a0;
+ (BOOL)isValidInsertVideos:(id)a0;
+ (void)recordDouyinSelectExtraModel:(id)a0;
+ (BOOL)shouldRefreshAferLoginStateChanged:(unsigned long long)a0;
+ (BOOL)getAndResetForbidRefreshFromLoginFlag;
+ (BOOL)checkDistinctAndSaveRecommendUGInfo:(id)a0;
+ (id)getUgShowModelFor:(id)a0;
+ (void)trackUGInfo:(id)a0;
+ (void)attachUgShowModel:(id)a0 to:(id)a1;
+ (id)shared;
+ (double)launchDuration;
+ (double)processStartTime;

- (BOOL)hasConsumedInsertJson:(id)a0;
- (void)recordConsumedInsertJson:(id)a0;
- (void).cxx_destruct;

@end
