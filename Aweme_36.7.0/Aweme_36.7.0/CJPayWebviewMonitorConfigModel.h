@interface CJPayWebviewMonitorConfigModel : JSONModel

@property (nonatomic) BOOL enableMonitor;
@property (nonatomic) long long detectBlankDelayTime;
@property (nonatomic) long long webviewPageTimeoutTime;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

@end
