@class NSDictionary, NSString, NSNumber;

@interface AWELiveStreamSearchEcomPitayaModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) int code;
@property (nonatomic) int refresh;
@property (nonatomic) int enter_inner_channel;
@property (nonatomic) double valid_ts;
@property (retain, nonatomic) NSDictionary *after_feed_params;
@property (copy, nonatomic) NSString *pitaya_upload_info;
@property (copy, nonatomic) NSString *room_id;
@property (retain, nonatomic) NSNumber *business_id;
@property (copy, nonatomic) NSString *category_name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
