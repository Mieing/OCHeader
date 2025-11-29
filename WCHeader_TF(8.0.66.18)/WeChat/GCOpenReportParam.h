@class NSDictionary;

@interface GCOpenReportParam : NSObject

@property (nonatomic) unsigned long long outSsid;
@property (nonatomic) unsigned long long innerSourceId;
@property (copy, nonatomic) NSDictionary *extInfoDic;

- (void).cxx_destruct;

@end
