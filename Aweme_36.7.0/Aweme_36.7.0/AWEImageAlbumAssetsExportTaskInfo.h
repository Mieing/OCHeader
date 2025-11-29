@class NSString;

@interface AWEImageAlbumAssetsExportTaskInfo : NSObject

@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) BOOL hasError;
@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSString *rootPath;

- (void).cxx_destruct;

@end
