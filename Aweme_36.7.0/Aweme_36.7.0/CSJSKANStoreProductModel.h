@class NSDictionary, NSNumber, NSString;

@interface CSJSKANStoreProductModel : NSObject <NSCoding>

@property (copy, nonatomic) NSDictionary *originDic;
@property (retain, nonatomic) NSNumber *itunce_item_id;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *ad_network_id;
@property (retain, nonatomic) NSNumber *campaign_id;
@property (retain, nonatomic) NSNumber *source_app_id;
@property (copy, nonatomic) NSString *nonce;
@property (retain, nonatomic) NSNumber *timestamp;
@property (copy, nonatomic) NSString *signature;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id)skanInfoSearalizaitonValue;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
