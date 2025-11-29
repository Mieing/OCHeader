@class NSString, NSDictionary;

@interface AnnieXMonitorConfig : NSObject

@property (copy, nonatomic) NSString *containerType;
@property (copy, nonatomic) NSString *coreViewType;
@property (copy, nonatomic) NSString *engineType;
@property (copy, nonatomic) NSString *originURL;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSString *containerName;
@property (retain, nonatomic) NSDictionary *monitorCommonParams;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *templateUrl;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;

- (void).cxx_destruct;

@end
