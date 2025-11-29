@class NSString, NSNumber, NSArray;

@interface BDXBridgePoiUGCMultiPicturePreviewMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *loadMore;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *preloadThreshold;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSString *selectedRateId;
@property (retain, nonatomic) NSNumber *selectedMaterialIndex;
@property (retain, nonatomic) NSArray *commentList;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
