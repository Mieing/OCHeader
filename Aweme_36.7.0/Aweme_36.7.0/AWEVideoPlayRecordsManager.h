@class NSString, NSMutableArray, AWENetworkQuailityManager;

@interface AWEVideoPlayRecordsManager : NSObject <AWENetworkQuailityDelegate>

@property (retain, nonatomic) AWENetworkQuailityManager *nqeManager;
@property double tcp_rtt;
@property double tcp_bandwith;
@property double http_rtt;
@property (retain, nonatomic) NSMutableArray *records;
@property (retain, nonatomic) NSMutableArray *historyRecords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINLiteAdaperClass;
+ (id)getLastestVideoPlayRecords:(unsigned long long)a0;
+ (double)last_http_rtt;
+ (double)last_tcp_rtt;
+ (double)last_tcp_bandwith;
+ (void)addPlayRecord:(id)a0;
+ (id)lastThreeRecords;
+ (id)sharedInstance;

- (id)aAWEFeedModuleServiceDOUYINLiteAdaper;
- (void)networkQualityManger:(id)a0 didChangeQuailty:(id)a1;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (id)init;

@end
