@class NSString, NSArray;

@interface HMDALogUploadInfo : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *instanceName;
@property (copy, nonatomic) NSArray *alogFileList;
@property (copy, nonatomic) NSString *zipPath;
@property (nonatomic) int status;
@property (nonatomic) double uploadStartTime;

- (void).cxx_destruct;

@end
