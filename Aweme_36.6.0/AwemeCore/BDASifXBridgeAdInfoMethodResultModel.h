@class NSNumber, NSString, NSArray;

@interface BDASifXBridgeAdInfoMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *code;
@property (retain, nonatomic) NSNumber *cid;
@property (copy, nonatomic) NSString *ad_id;
@property (copy, nonatomic) NSString *group_id;
@property (copy, nonatomic) NSString *log_extra;
@property (copy, nonatomic) NSString *skan_parameters;
@property (retain, nonatomic) NSArray *track_url_list;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
