@class NSString;

@interface HMDALogUploadMonitorInfo : NSObject

@property (nonatomic) double uploadQueneWaitCost;
@property (nonatomic) double fileProcessCost;
@property (nonatomic) double uploadCost;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *activateManner;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *uploadFileType;
@property (copy, nonatomic) NSString *instanName;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) double fetchStartTime;
@property (nonatomic) double fetchEndTime;
@property (copy, nonatomic) NSString *XTTLogID;

- (void).cxx_destruct;

@end
