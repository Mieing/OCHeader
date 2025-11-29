@class NSString;

@interface OMJCDNUploadRequest : NSObject

@property (readonly, nonatomic) NSString *taskKey;
@property (readonly, nonatomic) unsigned long long cdnScene;
@property (readonly, nonatomic) NSString *filePath;

- (id)initWithTaskKey:(id)a0 cdnScene:(unsigned long long)a1 filePath:(id)a2;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
