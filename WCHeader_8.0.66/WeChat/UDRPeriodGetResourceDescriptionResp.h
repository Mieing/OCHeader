@class UDRPeriodUpdateSetting, NSMutableArray, UDRPeriodUpdateSplitInfo;

@interface UDRPeriodGetResourceDescriptionResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *respProjectItems;
@property (nonatomic) int ret;
@property (retain, nonatomic) UDRPeriodUpdateSetting *periodUpdateSetting;
@property (retain, nonatomic) UDRPeriodUpdateSplitInfo *splitInfo;

+ (void)initialize;

@end
