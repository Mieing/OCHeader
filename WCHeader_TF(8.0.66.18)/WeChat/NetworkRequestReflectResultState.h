@class NSString, YtExtraOptions, UIImage, NSDictionary;

@interface NetworkRequestReflectResultState : BaseState {
    UIImage *frameUIImage;
    BOOL isManual;
    int similarityThreshold;
    NSString *sessionId;
    BOOL needEncrypt;
    NSString *config;
    int backendProtoType;
    int changePointNum;
    NSString *extraConfig;
    NSString *controlConfig;
    YtExtraOptions *extraOptions;
    NSDictionary *extraOptionsDict;
}

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *secretId;
@property (retain, nonatomic) NSString *secretKey;
@property (retain, nonatomic) NSString *userId;
@property (retain, nonatomic) NSString *resultUrl;

- (void)loadWithName:(id)a0 withSDKConfigData:(id)a1;
- (void)enter;
- (void)sendUIEventWithValue:(id)a0 withType:(id)a1;
- (void)onReflectRequest;
- (void)onResponseHandle:(id)a0 error:(id)a1;
- (void)onActionReflectRequest;
- (void)checkResult:(id)a0;
- (id)ComposePersonLiveRequestWith:(id)a0;
- (id)ComposeReflectRequestWith:(id)a0;
- (id)ComposeActionReflectRequestWith:(id)a0;
- (id)imageWithImage:(id)a0 scaledToSize:(struct CGSize { double x0; double x1; })a1;
- (id)CppStructToObjC:(struct YTDataPack { struct vector<YTRawImgData, std::allocator<YTRawImgData>> { struct YTRawImgData *x0; struct YTRawImgData *x1; struct __compressed_pair<YTRawImgData *, std::allocator<YTRawImgData>> { struct YTRawImgData *x0; } x2; } x0; long long x1; long long x2; struct vector<long long, std::allocator<long long>> { long long *x0; long long *x1; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x0; } x2; } x3; float x4; int x5; int x6; int x7; int x8; int x9; char *x10; char *x11; char *x12; struct vector<RawYuvData, std::allocator<RawYuvData>> { struct RawYuvData *x0; struct RawYuvData *x1; struct __compressed_pair<RawYuvData *, std::allocator<RawYuvData>> { struct RawYuvData *x0; } x2; } x13; })a0;
- (id)getBase64BestImage:(struct YTFullPack { struct YTDataPack { struct vector<YTRawImgData, std::allocator<YTRawImgData>> { struct YTRawImgData *x0; struct YTRawImgData *x1; struct __compressed_pair<YTRawImgData *, std::allocator<YTRawImgData>> { struct YTRawImgData *x0; } x2; } x0; long long x1; long long x2; struct vector<long long, std::allocator<long long>> { long long *x0; long long *x1; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x0; } x2; } x3; float x4; int x5; int x6; int x7; int x8; int x9; char *x10; char *x11; char *x12; struct vector<RawYuvData, std::allocator<RawYuvData>> { struct RawYuvData *x0; struct RawYuvData *x1; struct __compressed_pair<RawYuvData *, std::allocator<RawYuvData>> { struct RawYuvData *x0; } x2; } x13; } x0; struct YTCAPTCHA { int x0; int x1; int x2; int x3; struct vector<int, std::allocator<int>> { int *x0; int *x1; struct __compressed_pair<int *, std::allocator<int>> { int *x0; } x2; } x4; char *x5; } x1; struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; } x2; })a0;
- (void).cxx_destruct;

@end
