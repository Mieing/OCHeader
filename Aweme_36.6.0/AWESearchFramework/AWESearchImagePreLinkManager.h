@class NSArray, NSTimer;

@interface AWESearchImagePreLinkManager : NSObject

@property (nonatomic) BOOL enablePreLinkKeepAlive;
@property (copy, nonatomic) NSArray *domainWhiteList;
@property (nonatomic) double fatigueTime;
@property (retain, nonatomic) NSTimer *timer;

+ (void)beginPreConnect;
+ (void)endPreConnect;
+ (id)shareInstance;

- (void)p_initConfig;
- (void)p_beginPreConnect;
- (void)p_endPreConnect;
- (void)p_preConnectAllDomains;
- (void).cxx_destruct;
- (id)init;

@end
