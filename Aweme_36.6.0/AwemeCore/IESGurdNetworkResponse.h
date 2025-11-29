@class NSString, NSDictionary, NSError;

@interface IESGurdNetworkResponse : NSObject

@property (copy, nonatomic) NSString *requestURLString;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) id responseObject;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *allHeaderFields;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long retryTimes;

- (void).cxx_destruct;

@end
