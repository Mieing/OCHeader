@class NSString, AWEAssetModel;

@interface ACCMediaResource : NSObject

@property (retain, nonatomic) AWEAssetModel *assetInfo;
@property (retain, nonatomic) NSString *relativePath;

- (id)initWithDTOEditVideoSegmentData:(id)a0;
- (id)dtoVideoSegmentData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
