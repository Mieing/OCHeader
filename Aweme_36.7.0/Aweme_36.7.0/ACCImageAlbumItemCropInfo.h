@class NSString, ACCImageAlbumItemDraftResourceRestorableModel;

@interface ACCImageAlbumItemCropInfo : ACCImageAlbumItemDraftResourceRestorableModel

@property (nonatomic) unsigned long long cropRatio;
@property (readonly, copy, nonatomic) NSString *cropRatioString;
@property (nonatomic) double zoomScale;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (readonly, nonatomic) BOOL hasCropped;
@property (retain, nonatomic) ACCImageAlbumItemDraftResourceRestorableModel *compressedCroppedImageInfo;

+ (id)cropRatioStringWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)originalCropRatio:(struct CGSize { double x0; double x1; })a0;
+ (id)cropRatioString:(unsigned long long)a0;

- (id)initWithTaskId:(id)a0;
- (BOOL)didInfosChangedWithTarget:(id)a0;
- (void).cxx_destruct;

@end
