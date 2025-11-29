@class NSString, NSNumber;

@interface BDXBridgePoiInjectCommentPostFileMaterials : BDXBridgeModel

@property (copy, nonatomic) NSString *mediaId;
@property (copy, nonatomic) NSString *mediaUrl;
@property (retain, nonatomic) NSNumber *mediaType;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *vid;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *videoCoverURL;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
