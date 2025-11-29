@class NSString, NSArray;

@interface BDXBridgeCommentOpenHunterCommentImagePanelMediaData : BDXBridgeModel

@property (copy, nonatomic) NSString *lynxSchema;
@property (copy, nonatomic) NSString *lynxData;
@property (retain, nonatomic) NSArray *media;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
