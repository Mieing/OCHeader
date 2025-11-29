@class NSString, NSNumber;

@interface BDXBridgePoiEditCommentPostCardMaterials : BDXBridgeModel

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *base64;
@property (retain, nonatomic) NSNumber *mediaType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
