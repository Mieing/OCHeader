@class NSString, NSArray;

@interface BDXBridgePoiEditCommentPostCardMethodResultModel : BDXBridgeModel

@property (nonatomic) BOOL needSave;
@property (copy, nonatomic) NSString *music;
@property (retain, nonatomic) NSArray *imageList;
@property (retain, nonatomic) NSArray *materials;

+ (id)imageListJSONTransformer;
+ (id)materialsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
