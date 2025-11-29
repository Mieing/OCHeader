@class _LVDraftStickerPayloadPackage, NSString;

@interface LVDraftStickerPayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialSticker> { struct MaterialSticker *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (retain, nonatomic) _LVDraftStickerPayloadPackage *package;
@property (copy, nonatomic) NSString *relativePath;
@property (nonatomic) double initialScale;
@property (copy, nonatomic) NSString *resourceMD5;
@property (copy, nonatomic) NSString *emojiUnicode;
@property (copy, nonatomic) NSString *categoryID;
@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) long long checkFlag;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *previewCoverUrl;
@property (copy, nonatomic) NSString *resourceID;
@property (nonatomic) long long sourcePlatform;
@property (copy, nonatomic) NSString *stickerID;
@property (copy, nonatomic) NSString *unicode;

+ (struct { long long x0; int x1; unsigned int x2; long long x3; })defaultDuration;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialSticker> { struct MaterialSticker *x0; struct __shared_weak_count *x1; })a0;
- (id)copyToAnother;
- (struct shared_ptr<CutSame::MaterialSticker> { struct MaterialSticker *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)convertImageIfNeededWithRootPath:(id)a0;
- (id)copyToNewObject;
- (id)initWithType:(unsigned long long)a0 payloadID:(id)a1;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialSticker> { struct MaterialSticker *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
