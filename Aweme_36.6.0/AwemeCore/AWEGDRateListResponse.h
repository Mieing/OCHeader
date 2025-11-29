@class NSString;

@interface AWEGDRateListResponse : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long status_code;
@property (copy, nonatomic) NSString *lynx_url;
@property (copy, nonatomic) NSString *load_more;
@property (copy, nonatomic) NSString *raw_data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
