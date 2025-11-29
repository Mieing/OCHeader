@class NSString;

@interface WCSKAdNetworkItem : NSObject <NSCopying, NSCoding>

@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *adNetworkId;
@property (nonatomic) long long campaignId;
@property (retain, nonatomic) NSString *itunesItemId;
@property (retain, nonatomic) NSString *nonce;
@property (retain, nonatomic) NSString *sourceAppId;
@property (nonatomic) long long timestamp;
@property (retain, nonatomic) NSString *signature;

- (id)initWithProductId:(id)a0;
- (id)initWithItem:(id)a0 targetAppId:(id)a1;
- (id)initWithParamsInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendSKAdInfoToParameters:(id)a0 forProduct:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
