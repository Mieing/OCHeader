@class NSArray, NSString;

@interface CJPayContainerConfig : JSONModel

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL disableAlog;
@property (nonatomic) long long colorDiff;
@property (nonatomic) BOOL disableBlankDetect;
@property (copy, nonatomic) NSArray *urlBlockList;
@property (nonatomic) BOOL enableHybridkitUA;
@property (nonatomic) BOOL cjwebEnable;
@property (copy, nonatomic) NSArray *cjwebUrlBlockList;
@property (copy, nonatomic) NSArray *cjwebUrlAllowList;
@property (copy, nonatomic) NSString *argusDownSwitch;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
