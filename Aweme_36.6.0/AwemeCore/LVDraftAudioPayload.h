@class NSString, NSArray, AVURLAsset, LVDraftAudioPayloadPackage;

@interface LVDraftAudioPayload : LVDraftPayload {
    struct shared_ptr<CutSame::MaterialAudio> { struct MaterialAudio *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (retain, nonatomic) LVDraftAudioPayloadPackage *package;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) long long sourcePlatformType;
@property (retain, nonatomic) AVURLAsset *asset;
@property (retain, nonatomic) AVURLAsset *intensifiesAudio;
@property (copy, nonatomic) NSString *intensifiesAudioRelativePath;
@property (copy, nonatomic) NSString *categoryID;
@property (copy, nonatomic) NSString *categoryNamePrivate;
@property (nonatomic) long long checkFlag;
@property (nonatomic) long long durationMilliSeconds;
@property (copy, nonatomic) NSString *effectID;
@property (copy, nonatomic) NSString *intensifiesPath;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *relativePath;
@property (nonatomic) long long sourcePlatform;
@property (copy, nonatomic) NSString *textID;
@property (copy, nonatomic) NSString *toneType;
@property (copy, nonatomic) NSArray *wavePoints;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialAudio> { struct MaterialAudio *x0; struct __shared_weak_count *x1; })a0;
- (id)copyToAnother;
- (struct shared_ptr<CutSame::MaterialAudio> { struct MaterialAudio *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (id)initWithType:(unsigned long long)a0 musicID:(id)a1 asset:(id)a2;
- (id)intensifiesAbsolutePath;
- (id)intensifiesRelativePath;
- (id)initWithType:(unsigned long long)a0 asset:(id)a1;
- (void)setIntensifiesRelativePath:(id)a0;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialAudio> { struct MaterialAudio *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
