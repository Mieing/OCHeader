@class NSString, NSDictionary, NSURL, XPlayRequestMetrics;

@interface XPlayNetworkHTTPResponse : NSObject

@property (nonatomic) long long statusCode;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *MIMEType;
@property (copy, nonatomic) NSDictionary *allHeaderFields;
@property (retain, nonatomic) XPlayRequestMetrics *metrics;
@property (copy, nonatomic) NSString *redirectURLString;
@property (copy, nonatomic) NSString *enginType;
@property (copy, nonatomic) NSString *requestLog;

- (void).cxx_destruct;

@end
