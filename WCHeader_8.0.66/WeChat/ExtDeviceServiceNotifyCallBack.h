@interface ExtDeviceServiceNotifyCallBack : NSObject

@property (nonatomic) unsigned long long task_id;
@property (nonatomic) unsigned int event_id;
@property (copy, nonatomic) id /* block */ callBack;

- (void).cxx_destruct;

@end
