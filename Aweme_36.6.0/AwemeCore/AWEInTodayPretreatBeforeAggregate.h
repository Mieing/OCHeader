@interface AWEInTodayPretreatBeforeAggregate : NSObject

+ (id)distributeImageSourceForYear:(long long)a0 withLimitCount:(long long)a1 appList:(id)a2;
+ (id)creatPriorSetByAppList:(id)a0;
+ (id)fetch2024ImagePHAssetsResult;
+ (long long)setupGroupWithBucketAsset:(id)a0 monthCountList:(id)a1 priorAsset:(id)a2 resultOf2023Year:(id)a3 priorSet:(id)a4;
+ (id)distributeCountForCountArray:(id)a0 withLimit:(long long)a1 allCount:(long long)a2;
+ (long long)calculateMonthWithBucketName:(id)a0;
+ (id)pickPhotoFromBucket:(id)a0 monthDistribute:(long long)a1 monthCount:(long long)a2;
+ (BOOL)isAsset:(id)a0 inPriorSet:(id)a1;
+ (id)convertFromDateToBucket:(id)a0;
+ (id)randomPickPhoto:(id)a0 withLimit:(long long)a1;

@end
