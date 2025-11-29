@class NSString;

@interface OMJCDNDownloadRequest : NSObject

@property (readonly, nonatomic) NSString *taskKey;
@property (readonly, nonatomic) unsigned long long cdnScene;
@property (readonly, nonatomic) NSString *cdnURL;
@property (readonly, nonatomic) NSString *resultFilePath;

- (id)initWithTaskKey:(id)a0 cdnScene:(unsigned long long)a1 cdnURL:(id)a2 resultFilePath:(id)a3;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
