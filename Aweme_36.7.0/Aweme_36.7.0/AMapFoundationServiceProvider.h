@class NSString;

@interface AMapFoundationServiceProvider : NSObject

@property (copy, nonatomic) NSString *authServerAddress;
@property (copy, nonatomic) NSString *authServerAddressV6;
@property (copy, nonatomic) NSString *statisticsServerAddress;
@property (copy, nonatomic) NSString *manifestServerAddress;
@property (copy, nonatomic) NSString *logsServerAddress;
@property (copy, nonatomic) NSString *logsServerAddressV6;
@property (copy, nonatomic) NSString *AOSServerAddress;
@property (copy, nonatomic) NSString *AOSServerAddressV6;
@property (copy, nonatomic) NSString *ADIUServerAddress;
@property (copy, nonatomic) NSString *ADIUServerAddressV6;
@property (readonly, nonatomic) NSString *restServiceHost;
@property (readonly, nonatomic) NSString *restServiceHostV6;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
