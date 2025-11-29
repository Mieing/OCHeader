@class CJPayDyPayProcessConfigModel;

@interface CJPayOutPayExpCollectManager : NSObject

@property (weak, nonatomic) CJPayDyPayProcessConfigModel *configModel;
@property (nonatomic) double latestAppEnterForegroundTimeStamp;

+ (void)registerPlugin;
+ (id)sharedInstance;

- (void)p_addNotification;
- (id)p_commonTrackParams;
- (void)syncConfigModel:(id)a0;
- (void)p_handleWillEnterForeground;
- (void)p_handleOutPayPerformanceFrom:(id)a0;
- (void)p_handleOutPayLoadingShow;
- (void).cxx_destruct;
- (void)dealloc;

@end
