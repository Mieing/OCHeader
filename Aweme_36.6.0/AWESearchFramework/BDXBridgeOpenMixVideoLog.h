@class NSString;

@interface BDXBridgeOpenMixVideoLog : BDXBridgeModel

@property (copy, nonatomic) NSString *event_type;
@property (copy, nonatomic) NSString *search_id;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
