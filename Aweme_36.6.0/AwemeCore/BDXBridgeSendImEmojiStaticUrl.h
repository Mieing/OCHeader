@class NSString, NSNumber, NSArray;

@interface BDXBridgeSendImEmojiStaticUrl : BDXBridgeModel

@property (copy, nonatomic) NSString *uri;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSArray *url_list;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
