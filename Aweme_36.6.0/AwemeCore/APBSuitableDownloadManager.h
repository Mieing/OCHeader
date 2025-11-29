@class NSString;

@interface APBSuitableDownloadManager : NSObject

@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *sign;
@property (copy, nonatomic) id /* block */ succeedBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

+ (void)downloadSuitable:(id)a0;
+ (void)download:(id)a0 fileName:(id)a1 md5:(id)a2;

- (id)initWithURL:(id)a0 path:(id)a1 fileName:(id)a2 sign:(id)a3;
- (void)beginDownload:(id /* block */)a0 failure:(id /* block */)a1;
- (void)startLoad;
- (BOOL)checkFileExists:(id)a0;
- (BOOL)checkIfModelValidWithURL:(id)a0;
- (id)modelLocation;
- (void).cxx_destruct;

@end
