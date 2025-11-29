@interface WCFinderUploadProgressModel : NSObject

@property (nonatomic) double progress;
@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) unsigned long long uploadSize;
@property (nonatomic) unsigned long long currentUploadTaskIndex;
@property (nonatomic) unsigned long long uploadTaskCount;

@end
