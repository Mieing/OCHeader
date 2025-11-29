@class NSString;

@interface WAPermissionResult : MMObject

@property (nonatomic) unsigned int permissionState;
@property (nonatomic) BOOL useTempPermission;
@property (nonatomic) unsigned int runningState;
@property (retain, nonatomic) NSString *runningStateDescription;
@property (nonatomic) BOOL needDelayExecute;
@property (retain, nonatomic) NSString *permissionMsg;
@property (retain, nonatomic) NSString *resultMsg;
@property (nonatomic) BOOL resultHasPermission;

+ (id)getFailedResult;
+ (id)getSucceedResult;

- (void).cxx_destruct;

@end
