@class NSString;

@interface KvReportAction22138 : NSObject

@property (nonatomic) int innerVersion;
@property (nonatomic) unsigned int actionCode;
@property (retain, nonatomic) NSString *actionName;
@property (retain, nonatomic) NSString *actionExt;
@property (nonatomic) int result;
@property (retain, nonatomic) NSString *resultExt;
@property (nonatomic) long long commentScene;
@property (retain, nonatomic) NSString *snn;
@property (nonatomic) long long cost;
@property (nonatomic) long long actionTime;

+ (id)action;

- (void)perform;
- (void).cxx_destruct;

@end
