@class NSString, NSDictionary, BDXTracertMonitor;

@interface BDXMonitorContext : NSObject

@property (copy, nonatomic) NSString *originURL;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSString *containerName;
@property (nonatomic) long long viewType;
@property (retain, nonatomic) NSDictionary *monitorCommonParams;
@property (nonatomic) BOOL isMonitorEnabled;
@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) BDXTracertMonitor *tracertMonitor;

+ (void)initialize;

- (void).cxx_destruct;
- (id)init;

@end
