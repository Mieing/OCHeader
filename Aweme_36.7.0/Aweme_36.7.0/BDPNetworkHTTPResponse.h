@class NSString, NSDictionary, NSURL, BDPRequestMetrics;

@interface BDPNetworkHTTPResponse : NSObject

@property (nonatomic) long long statusCode;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *MIMEType;
@property (copy, nonatomic) NSDictionary *allHeaderFields;
@property (retain, nonatomic) BDPRequestMetrics *metrics;
@property (copy, nonatomic) NSString *redirectURLString;
@property (copy, nonatomic) NSString *enginType;
@property (copy, nonatomic) NSString *requestLog;

- (void).cxx_destruct;

@end
