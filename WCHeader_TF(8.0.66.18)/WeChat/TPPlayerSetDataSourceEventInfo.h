@class NSString;

@interface TPPlayerSetDataSourceEventInfo : TPPlayerEventInfo

@property (copy, nonatomic) NSString *url;
@property (nonatomic, getter=isUseProxy) BOOL useProxy;
@property (nonatomic) long long urlProtocol;

- (id)init;
- (void).cxx_destruct;

@end
