@class NSString, NSMutableArray;

@interface UploadLoginFileManager : NSObject

@property (retain, nonatomic) NSMutableArray *logDirs;
@property (retain, nonatomic) NSString *rootDir;
@property BOOL isUploaded;
@property (copy) id /* block */ callbakcblock;

+ (id)sharedInstance;

- (id)init;
- (void)addLogDirName:(id)a0;
- (void)uploadAllLogWithLogDirName:(id)a0 withBlock:(id /* block */)a1;
- (void)checkzipdataWithlogdir:(id)a0;
- (void)uploadzipdata:(id)a0 deletezipdir:(id)a1 deleteLogdir:(id)a2;
- (id)compressDir:(id)a0;
- (id)readFileToData:(id)a0;
- (id)getDeviceInfo;
- (void)httprequestWithUrl:(id)a0 withPostData:(id)a1 withCallback:(id /* block */)a2;
- (void)deleteFileAtPath:(id)a0;
- (void)deleteDirWithParentPath:(id)a0;
- (void).cxx_destruct;

@end
