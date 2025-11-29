@class NSString;

@interface WAReportCacheDetailItem : WAReportBaseItem

@property (nonatomic) unsigned long long weAppAllCacheSizeInBytes;
@property (nonatomic) unsigned int countedWeAppNum;
@property (copy, nonatomic) NSString *top1Appid;
@property (nonatomic) unsigned long long top1AppidCacheSizeInBytes;
@property (nonatomic) unsigned int top1AppidAppServiceType;
@property (copy, nonatomic) NSString *top1NickName;
@property (copy, nonatomic) NSString *top2Appid;
@property (nonatomic) unsigned long long top2AppidCacheSizeInBytes;
@property (nonatomic) unsigned int top2AppidAppServiceType;
@property (copy, nonatomic) NSString *top2NickName;
@property (copy, nonatomic) NSString *top3Appid;
@property (nonatomic) unsigned long long top3AppidCacheSizeInBytes;
@property (nonatomic) unsigned int top3AppidAppServiceType;
@property (copy, nonatomic) NSString *top3NickName;
@property (copy, nonatomic) NSString *top4Appid;
@property (nonatomic) unsigned long long top4AppidCacheSizeInBytes;
@property (nonatomic) unsigned int top4AppidAppServiceType;
@property (copy, nonatomic) NSString *top4NickName;
@property (copy, nonatomic) NSString *top5Appid;
@property (nonatomic) unsigned long long top5AppidCacheSizeInBytes;
@property (nonatomic) unsigned int top5AppidAppServiceType;
@property (copy, nonatomic) NSString *top5NickName;
@property (copy, nonatomic) NSString *top6Appid;
@property (nonatomic) unsigned long long top6AppidCacheSizeInBytes;
@property (nonatomic) unsigned int top6AppidAppServiceType;
@property (copy, nonatomic) NSString *top6NickName;
@property (copy, nonatomic) NSString *top7Appid;
@property (nonatomic) unsigned long long top7AppidCacheSizeInBytes;
@property (nonatomic) unsigned int top7AppidAppServiceType;
@property (copy, nonatomic) NSString *top7NickName;
@property (copy, nonatomic) NSString *top8Appid;
@property (nonatomic) unsigned long long top8AppidCacheSizeInBytes;
@property (nonatomic) unsigned int top8AppidAppServiceType;
@property (copy, nonatomic) NSString *top8NickName;
@property (nonatomic) unsigned long long restWeAppAllCacheSizeInBytes;
@property (nonatomic) unsigned long long publicDataSizeInBytes;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (void).cxx_destruct;

@end
