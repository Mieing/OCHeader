@class NSString, NSArray;

@interface BDASifXBridgeSendThirdTrackMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *track_label;
@property (copy, nonatomic) NSString *creative_id;
@property (copy, nonatomic) NSString *log_extra;
@property (retain, nonatomic) NSArray *track_url_list;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
