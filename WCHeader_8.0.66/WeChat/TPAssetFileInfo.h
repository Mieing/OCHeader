@class NSString;

@interface TPAssetFileInfo : NSObject

@property (nonatomic) int taskId;
@property (retain, nonatomic) NSString *cachePath;
@property (nonatomic) int fileId;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *cacheDir;
@property (retain, nonatomic) NSString *customPath;
@property (nonatomic) BOOL usePollingMode;

- (id)initWithTaskId:(int)a0 fileName:(id)a1;
- (void)dealloc;
- (id)generateCacheFile;
- (id)getLibraryCachePath;
- (id)getReadPath;
- (id)description;
- (void).cxx_destruct;

@end
