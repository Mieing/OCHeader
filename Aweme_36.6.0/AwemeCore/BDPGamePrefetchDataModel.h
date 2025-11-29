@class NSString, NSDictionary, NSURL, BDPNetworkHTTPResponse;

@interface BDPGamePrefetchDataModel : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSURL *data;
@property (retain, nonatomic) BDPNetworkHTTPResponse *response;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double timeout;
@property (copy, nonatomic) NSString *referer;
@property (copy, nonatomic) NSDictionary *commonMonitorParams;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;

@end
