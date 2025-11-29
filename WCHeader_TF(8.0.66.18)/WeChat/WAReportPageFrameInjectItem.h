@class NSString;

@interface WAReportPageFrameInjectItem : WAReportBaseItem

@property (copy, nonatomic) NSString *instanceId;
@property (nonatomic) unsigned int appServiceType;
@property (nonatomic) int injectCostTime;
@property (nonatomic) unsigned long long injectStartTime;
@property (nonatomic) unsigned long long injectEndTime;
@property (copy, nonatomic) NSString *moduleName;
@property (nonatomic) unsigned int pageFrameLength;
@property (nonatomic) BOOL isFromTaskPreload;
@property (copy, nonatomic) NSString *lazyLoadKey;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
