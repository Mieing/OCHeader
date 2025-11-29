@interface WCFinderLocalBackupConfig : NSObject

@property (nonatomic) double fakeTopLoadingTime;
@property (nonatomic) unsigned long long topThreshold;
@property (nonatomic) unsigned long long bottomThreshold;
@property (nonatomic) unsigned long long minCacheCount;
@property (nonatomic) BOOL disableUnread;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

@end
