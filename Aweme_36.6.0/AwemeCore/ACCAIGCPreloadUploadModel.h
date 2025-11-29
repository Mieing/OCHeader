@class NSString;

@interface ACCAIGCPreloadUploadModel : NSObject

@property (copy, nonatomic) NSString *filePathMd5;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) long long step;
@property (copy, nonatomic) NSString *uri;

- (void).cxx_destruct;

@end
