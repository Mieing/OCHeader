@class NSString, NSNumber;

@interface BDXBridgeShareHotspotTimelineMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *shareUrl;
@property (copy, nonatomic) NSString *shareTitle;
@property (copy, nonatomic) NSString *shareLinkDesc;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *listName;
@property (retain, nonatomic) NSNumber *listCellCount;
@property (copy, nonatomic) NSString *headerImageLocalPath;
@property (retain, nonatomic) NSNumber *roundedOffset;
@property (copy, nonatomic) NSString *image;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
