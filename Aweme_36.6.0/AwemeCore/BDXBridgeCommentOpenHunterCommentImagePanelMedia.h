@class NSDictionary;

@interface BDXBridgeCommentOpenHunterCommentImagePanelMedia : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *imageData;
@property (copy, nonatomic) NSDictionary *videoData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
