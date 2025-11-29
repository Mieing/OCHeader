@class NSString;

@interface BDUniversalMonitorModel : MMMatrixBaseModel

@property (nonatomic) unsigned long long monitorType;
@property (nonatomic) unsigned long long reportType;
@property (nonatomic) BOOL needImagesInfo;
@property (copy, nonatomic) NSString *fullPath;
@property (copy, nonatomic) NSString *path;

- (void).cxx_destruct;

@end
