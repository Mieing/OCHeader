@class NSString;

@interface TPCdnUrlInfo : NSObject

@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *uIp;
@property (readonly, nonatomic) NSString *cdnIp;
@property (readonly, nonatomic) NSString *errorStr;

- (id)initWithUrl:(id)a0 uIp:(id)a1 cdnIp:(id)a2 errorStr:(id)a3;
- (void).cxx_destruct;

@end
