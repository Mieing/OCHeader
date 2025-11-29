@class WCDataItem, NSString, EmoticonStoreReportInfo, MMLiteAppViewController;

@interface MMStoreEmoticonDetailLiteAppLogic : NSObject <IStoreEmotionRewardExt>

@property (retain, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *pid;
@property (weak, nonatomic) MMLiteAppViewController *viewController;
@property (copy, nonatomic) id /* block */ finishInstallBlock;
@property (copy, nonatomic) id /* block */ finishUninstallBlock;
@property (retain, nonatomic) WCDataItem *timeLineData;
@property (retain, nonatomic) EmoticonStoreReportInfo *reportInfo;
@property (nonatomic) int extranceScene;
@property (nonatomic) unsigned long long vcHash;

+ (id)createLogicWithPid:(id)a0 appId:(id)a1 attachedLiteAppVC:(id)a2;

- (void)dealloc;
- (id)initWithPid:(id)a0 appId:(id)a1 attachedLiteAppVC:(id)a2;
- (void).cxx_destruct;

@end
