@class NSString;

@interface JSAPIVerifyOverhead : NSObject {
    struct timeval { long long tv_sec; int tv_usec; } _startTime;
    NSString *_url;
    long long _cgi;
}

- (id)initWithUrl:(id)a0 cgi:(long long)a1;
- (void)computeTimeConsumption:(BOOL)a0 appId:(id)a1 errCode:(long long)a2;
- (void).cxx_destruct;

@end
