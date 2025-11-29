@class CameraScanGoodsItemPerformanceInfo, NSString, NSData, UIImage, CameraScanGoodsItemQualityInfo, CameraScanGoodsExtensionDetectResult, CameraScanGoodsItemExchangeInfo, NSNumber;

@interface CameraScanGoodsItemViewModel : MMObject

@property (copy, nonatomic) NSString *detectSessionId;
@property (retain, nonatomic) NSNumber *trackId;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizeRect;
@property (retain, nonatomic) NSData *itemImageData;
@property (retain, nonatomic) UIImage *itemCropImage;
@property (copy, nonatomic) NSString *reqKey;
@property (retain, nonatomic) CameraScanGoodsItemExchangeInfo *exchangeInfo;
@property (retain, nonatomic) CameraScanGoodsItemQualityInfo *qualityInfo;
@property (retain, nonatomic) CameraScanGoodsItemPerformanceInfo *performanceInfo;
@property (nonatomic) unsigned int scanType;
@property (nonatomic) long long imageSource;
@property (nonatomic) unsigned int itemSource;
@property (nonatomic) struct Mat { int flags; int dims; int rows; int cols; char *data; int *refcount; char *datastart; char *dataend; char *datalimit; struct MatAllocator *allocator; struct MSize { int *p; } size; struct MStep { unsigned long long *p; unsigned long long buf[2]; } step; } detectImage;
@property (retain, nonatomic) CameraScanGoodsExtensionDetectResult *detResult;
@property (retain, nonatomic) UIImage *detectAlbumImage;
@property (retain, nonatomic) NSString *action;
@property (retain, nonatomic) NSData *extraInfo;

+ (id)genDetectSessionId;

- (id)init;
- (void)printPerformance;
- (void)updateNormalizeRectWithGoodsObject:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
