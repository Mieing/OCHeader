@class NSString;

@interface OMJCDNUploadResult : NSObject

@property (readonly, nonatomic) NSString *taskKey;
@property (readonly, nonatomic) NSString *cdnURL;

- (id)initWithTaskKey:(id)a0 cdnURL:(id)a1;
- (void).cxx_destruct;

@end
