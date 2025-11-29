@class NSMutableArray, WCAdConventionalHalfScreenReportVideoInfo;

@interface WCAdConventionalHalfScreenReportModel : WCAdChannelReportExtendInfoModel

@property (nonatomic) unsigned long long stayTime;
@property (nonatomic) unsigned long long clickToFullScreenCount;
@property (nonatomic) unsigned long long dragToFullScreenCount;
@property (nonatomic) int pinToTop;
@property (retain, nonatomic) WCAdConventionalHalfScreenReportVideoInfo *videoInfo;
@property (retain, nonatomic) NSMutableArray *gridItems;

+ (id)modelPropertyBlacklistForConfigTag:(id)a0;

- (void)increaseGridExposureCountWithIndex:(long long)a0;
- (void).cxx_destruct;

@end
