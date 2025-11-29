@class WCDataItem, NSString, EmoticonStoreReportInfo, EmoticonStoreItem, UserOpInfo;

@interface MMEmoticonDetailPageContext : MMEmoticonLiteAppPageContextBase

@property (retain, nonatomic) NSString *pid;
@property (retain, nonatomic) EmoticonStoreItem *storeItem;
@property (nonatomic) BOOL needScrollToBottom;
@property (retain, nonatomic) NSString *customBackText;
@property (nonatomic) BOOL fromDesigner;
@property (nonatomic) BOOL fastManagement;
@property (copy, nonatomic) id /* block */ finishInstallBlock;
@property (copy, nonatomic) id /* block */ finishUninstallBlock;
@property (nonatomic) BOOL allowLimitedModeEnter;
@property (retain, nonatomic) WCDataItem *timeLineDataItem;
@property (retain, nonatomic) EmoticonStoreReportInfo *reportInfo;
@property (nonatomic) int precedingScene;
@property (retain, nonatomic) UserOpInfo *endOpInfo;
@property (retain, nonatomic) NSString *sdkRequestID;
@property (retain, nonatomic) NSString *bypassMsg;

- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (void).cxx_destruct;

@end
