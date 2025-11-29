@class NSString, NSNumber, NSObject;
@protocol CSJAdSKAdImpressionProtocol;

@interface CSJSKANADImpressionModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *ad_network_id;
@property (retain, nonatomic) NSNumber *ad_campaign_id;
@property (retain, nonatomic) NSNumber *advertised_app_id;
@property (copy, nonatomic) NSString *ad_impression_id;
@property (retain, nonatomic) NSNumber *source_app_id;
@property (retain, nonatomic) NSNumber *timestamp;
@property (copy, nonatomic) NSString *signature;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (retain, nonatomic) NSObject<CSJAdSKAdImpressionProtocol> *adImpression;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
