@class NSString;

@interface MJCdnDownloadRequest : NSObject

@property (readonly, copy, nonatomic) NSString *taskKey;
@property (readonly, copy, nonatomic) NSString *fileCdnURL;
@property (nonatomic) int appType;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) int fileType;

- (id)initWithTaskKey:(id)a0 fileCdnURL:(id)a1;
- (void).cxx_destruct;

@end
