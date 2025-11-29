@class NSString, NSNumber;

@interface BDXBridgeImCollectEmojiEmojiList : BDXBridgeModel

@property (copy, nonatomic) NSString *imageType;
@property (copy, nonatomic) NSString *uri;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *hashString;
@property (copy, nonatomic) NSString *url;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
