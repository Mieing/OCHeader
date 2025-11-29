@interface WCMediaUploadProgressModel : NSObject

@property (nonatomic) double progress;
@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) unsigned long long uploadSize;

@end
