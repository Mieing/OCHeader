@class NSString, NSArray, AWEGDRateDiggHint, AWEGDRateHeader;

@interface AWEGDRateFeedRawData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *toast_content;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) AWEGDRateHeader *header;
@property (copy, nonatomic) NSString *rate_center_entry_schema;
@property (copy, nonatomic) NSString *highlight_rate_id;
@property (retain, nonatomic) AWEGDRateDiggHint *rate_digg_hint;
@property (copy, nonatomic) NSString *full_img_digg_card_url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)headerJSONTransformer;
+ (id)rate_digg_hintJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
