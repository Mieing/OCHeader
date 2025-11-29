@class NSString;

@interface WCPreloadVideoRecord : NSObject <PBCoding>

@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *mid;
@property (nonatomic) unsigned int accessTime;
@property (nonatomic) unsigned int hasPreloadSize;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int configPreloadPercent;
@property (nonatomic) BOOL bNonAutoClean;
@property (nonatomic) unsigned int totalSize;
@property (nonatomic) BOOL bPreloadCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_mid;
+ (void)PBArrayAdd_accessTime;
+ (void)PBArrayAdd_hasPreloadSize;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_configPreloadPercent;
+ (void)PBArrayAdd_bNonAutoClean;
+ (void)PBArrayAdd_totalSize;
+ (void)PBArrayAdd_bPreloadCompleted;
+ (void)initialize;

@end
