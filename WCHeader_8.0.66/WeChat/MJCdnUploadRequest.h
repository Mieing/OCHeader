@class NSString;

@interface MJCdnUploadRequest : NSObject

@property (readonly, copy, nonatomic) NSString *taskKey;
@property (nonatomic) short appType;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) int fileType;

- (id)initWithTaskKey:(id)a0;
- (void).cxx_destruct;

@end
