@class NSString, BMFModsDownloader;

@interface LiveVideoBmfModsDownloader : NSObject {
    struct shared_ptr<std::thread> { struct thread *__ptr_; struct __shared_weak_count *__cntrl_; } _modelDownloadThread;
    BMFModsDownloader *_modelDownloaderOc;
    double _startDownloadTime;
}

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *cacheDir;
@property (copy, nonatomic) NSString *devicePlatform;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *algName;
@property (copy, nonatomic) NSString *modelStatus;
@property (nonatomic) BOOL useOcDownloader;
@property (copy, nonatomic) NSString *modelPath;
@property (nonatomic) long long status;

+ (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })cppStringFromOc:(id)a0;
+ (id)cppStringToOc:(const void *)a0;

- (id)parseParams:(id)a0 withKey:(id)a1 AndDefaultValues:(id)a2;
- (id)createModelCacheDir;
- (BOOL)checkParamsLegal;
- (id)initWithParams:(id)a0 appInfo:(id)a1 defaultValues:(id)a2;
- (void)startDownloadModel;
- (void)quitDownloadThread;
- (void)downloadModelOc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)getDeviceModel;

@end
