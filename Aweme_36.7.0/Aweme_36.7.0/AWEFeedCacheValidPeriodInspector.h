@class NSString;

@interface AWEFeedCacheValidPeriodInspector : NSObject <AWEFeedCacheDataInspector>

@property (nonatomic) long long expireTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkDataIsQualifiedWithObject:(id)a0;
- (id)expireTimeConfig;
- (id)initWithExpireTime:(long long)a0;

@end
