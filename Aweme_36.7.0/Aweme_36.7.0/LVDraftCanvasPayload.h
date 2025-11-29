@class LVDraftCanvasPayloadPackage, NSString, LVCanvasAsset;

@interface LVDraftCanvasPayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialCanvas> { struct MaterialCanvas *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (retain, nonatomic) LVDraftCanvasPayloadPackage *package;
@property (retain, nonatomic) LVCanvasAsset *asset;
@property (retain, nonatomic) LVCanvasAsset *albumAsset;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *imageFileKey;
@property (copy, nonatomic) NSString *smallImageFileKey;
@property (copy, nonatomic) NSString *albumImageFileKey;
@property (copy, nonatomic) NSString *canvasStyle;
@property (copy, nonatomic) NSString *canvasStyleId;
@property (copy, nonatomic) NSString *albumImage;
@property (nonatomic) double blur;
@property (copy, nonatomic) NSString *colorPrivate;
@property (copy, nonatomic) NSString *image;
@property (copy, nonatomic) NSString *imageID;
@property (copy, nonatomic) NSString *imageName;

+ (struct CGSize { double x0; double x1; })smallImagSize:(struct CGSize { double x0; double x1; })a0;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialCanvas> { struct MaterialCanvas *x0; struct __shared_weak_count *x1; })a0;
- (void)updateAsset:(id)a0;
- (id)copyToAnother;
- (struct shared_ptr<CutSame::MaterialCanvas> { struct MaterialCanvas *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)albumImageFileKeyUpdate;
- (void)imageFileKeyUpdate;
- (void)smallImageFileKeyUpdate;
- (id)fixIdentifier:(id)a0;
- (void)updateAlbumAsset:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialCanvas> { struct MaterialCanvas *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
