@class NSString, NSNumber, NSArray;

@interface BDXBridgeSendImEmojiAnimateUrl : BDXBridgeModel

@property (copy, nonatomic) NSString *uri;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSArray *url_list;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
