@class ToygerBlob, ToygerAlgorithmConfig, NSString, NSData, ToygerFaceFrame, APBToygerUploadConfig, NSMutableArray, NSObject, ToygerDocFrame, ToygerConfig;
@protocol OS_dispatch_semaphore, ToygerServiceInstanceDelegate;

@interface ToygerServiceInstance : NSObject {
    void *_toygerInstance;
    NSString *_aesKey;
    NSObject<OS_dispatch_semaphore> *_lock;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _currentFeature;
    NSString *_zimId;
    struct vector<TGFaceInfo, std::allocator<TGFaceInfo>> { struct TGFaceInfo *__begin_; struct TGFaceInfo *__end_; struct __compressed_pair<TGFaceInfo *, std::allocator<TGFaceInfo>> { struct TGFaceInfo *__value_; } __end_cap_; } _info;
    struct map<std::string, float, std::less<std::string>, std::allocator<std::pair<const std::string, float>>> { struct __tree<std::__value_type<std::string, float>, std::__map_value_compare<std::string, std::__value_type<std::string, float>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, float>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, float>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, float>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _ext;
    BOOL _useMultiPictureCollect;
}

@property (retain, nonatomic) ToygerAlgorithmConfig *algorithmConfig;
@property (retain, nonatomic) APBToygerUploadConfig *uploadConfig;
@property (retain, nonatomic) ToygerBlob *blob;
@property (retain, nonatomic) ToygerFaceFrame *faceFrame;
@property (retain, nonatomic) ToygerDocFrame *docFrame;
@property (nonatomic) unsigned long long currentType;
@property (retain, nonatomic) NSData *modelData;
@property (copy, nonatomic) NSString *modelPath;
@property (retain, nonatomic) NSData *mouthModelData;
@property (copy, nonatomic) NSString *mouthModelPath;
@property (copy, nonatomic) NSString *license;
@property (copy, nonatomic) NSString *bundleid;
@property (nonatomic) struct ToygerCallback { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; } *callBack;
@property (nonatomic) BOOL fpp_pre_processed;
@property (retain, nonatomic) NSString *userid;
@property (retain, nonatomic) NSString *cacheFolderPath;
@property (retain, nonatomic) NSMutableArray *cachedBlobElemArr;
@property (retain, nonatomic) ToygerConfig *config;
@property (weak, nonatomic) id<ToygerServiceInstanceDelegate> delegate;
@property (retain, nonatomic) NSString *aesCipher;

+ (id)getImageBlobElemwithFrame:(struct TGFaceInfo { struct TGFrame { char *x0; long long x1; int x2; int x3; int x4; int x5; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x6; int x7; int x8; BOOL x9; int *x10; } x0; struct TGFaceAttr { int x0; BOOL x1; BOOL x2; struct TGFRect { float x0; float x1; float x2; float x3; } x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; short x17; float x18[10]; BOOL x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; int x27; float x28; float x29; int x30; float x31[8]; int x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; int x37; BOOL x38; long long x39; long long x40; BOOL x41; float x42; } x1; struct TGFrame { char *x0; long long x1; int x2; int x3; int x4; int x5; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x6; int x7; int x8; BOOL x9; int *x10; } x2; struct TGFrame { char *x0; long long x1; int x2; int x3; int x4; int x5; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x6; int x7; int x8; BOOL x9; int *x10; } x3; struct vector<std::pair<std::string, std::vector<TGFaceInfo>>, std::allocator<std::pair<std::string, std::vector<TGFaceInfo>>>> { void *x0; void *x1; struct __compressed_pair<std::pair<std::string, std::vector<TGFaceInfo>> *, std::allocator<std::pair<std::string, std::vector<TGFaceInfo>>>> { void *x0; } x2; } x4; struct vector<std::pair<std::string, std::vector<TGFaceInfo>>, std::allocator<std::pair<std::string, std::vector<TGFaceInfo>>>> { void *x0; void *x1; struct __compressed_pair<std::pair<std::string, std::vector<TGFaceInfo>> *, std::allocator<std::pair<std::string, std::vector<TGFaceInfo>>>> { void *x0; } x2; } x5; })a0 faceRect:(struct TGFRect { float x0; float x1; float x2; float x3; })a1 andInstance:(id)a2 logExtParams:(id)a3;
+ (id)getAlgParamDetailFromAttr:(struct TGFaceAttr { int x0; BOOL x1; BOOL x2; struct TGFRect { float x0; float x1; float x2; float x3; } x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; short x17; float x18[10]; BOOL x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; int x27; float x28; float x29; int x30; float x31[8]; int x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; int x37; BOOL x38; long long x39; long long x40; BOOL x41; float x42; })a0;
+ (id)blobTypeNameFrom:(int)a0;
+ (long long)getToygerState;
+ (void)genVideoWith:(struct vector<TGFaceInfo, std::allocator<TGFaceInfo>> { struct TGFaceInfo *x0; struct TGFaceInfo *x1; struct __compressed_pair<TGFaceInfo *, std::allocator<TGFaceInfo>> { struct TGFaceInfo *x0; } x2; })a0 actionName:(id)a1 isEvidence:(BOOL)a2 handler:(id /* block */)a3;
+ (id)metaInfo;

- (void)_prepareAlgorithm;
- (void)setDocConfig:(id)a0;
- (id)initWithType:(unsigned long long)a0 andExtInfo:(id)a1 modelTypeArray:(id)a2 errorPtr:(id *)a3;
- (BOOL)_prepareModelDataWithModelTypeArray:(id)a0;
- (BOOL)prepareFaceModel;
- (BOOL)prepareMouthModel;
- (id)_buildToygerAlgorithmWithModelTypeArray:(id)a0;
- (id)dataWithDocCaptureImage:(id)a0 andAeskey:(id)a1 extraInfo:(id)a2;
- (id)dataWithSurveillance:(id)a0 byType:(unsigned long long)a1 extraInfo:(id)a2;
- (void)handleRemoteLogofFaceDetectPhase:(id)a0 ext:(id)a1;
- (void)updateNativeStatus:(int)a0 message:(id)a1;
- (void)processImage:(struct opaqueCMSampleBuffer { } *)a0 byOrientation:(long long)a1 extraInfo:(id)a2;
- (void)processBestImage;
- (void)photinusFinish;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (void)dealloc;

@end
