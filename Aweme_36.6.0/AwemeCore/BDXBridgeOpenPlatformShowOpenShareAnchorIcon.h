@class NSString, NSNumber, NSArray;

@interface BDXBridgeOpenPlatformShowOpenShareAnchorIcon : BDXBridgeModel

@property (copy, nonatomic) NSString *uri;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *url_key;
@property (retain, nonatomic) NSArray *url_list;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
