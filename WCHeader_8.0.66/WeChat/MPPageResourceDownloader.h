@class NSString, NSMutableDictionary, NSURLSession;

@interface MPPageResourceDownloader : NSObject

@property (retain, nonatomic) NSMutableDictionary *contextDic;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (nonatomic) unsigned int fileSequence;
@property (copy, nonatomic) NSString *saveDirPath;

+ (id)downloadIdPrefixWithTemplateType:(unsigned int)a0;
+ (id)downloadIdWithTemplateType:(unsigned int)a0 version:(unsigned int)a1 fullVersion:(id)a2;

- (id)init;
- (void)dealloc;
- (void)downloadWithIdentifier:(id)a0 url:(id)a1 md5:(id)a2 header:(id)a3 templateType:(unsigned int)a4 fullVersion2FilePathMap:(id)a5 completionHandler:(id /* block */)a6;
- (id)completionParamWithErrorCode:(unsigned int)a0 errorMsg:(id)a1;
- (id)generateCompletionParam:(id)a0;
- (BOOL)hasDownloadingTaskWithIdentifier:(id)a0;
- (void)cancelDownloadingTasksWithPrefix:(id)a0;
- (id)errorWithCode:(long long)a0 description:(id)a1;
- (id)filePathWithIdentifier:(id)a0;
- (void)downloadTaskWithContext:(id)a0 identifier:(id)a1 url:(id)a2 md5:(id)a3 header:(id)a4 filePath:(id)a5 fullVersion2FilePathMap:(id)a6;
- (id)parseHeaderFields:(id)a0 targetKey:(id)a1;
- (void)setupURLSession;
- (void)mainThread_onResponseWithIdentifier:(id)a0 completionParam:(id)a1;
- (void).cxx_destruct;

@end
