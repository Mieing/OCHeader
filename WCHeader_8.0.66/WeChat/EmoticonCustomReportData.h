@interface EmoticonCustomReportData : MMObject

+ (void)ReportCustomEmoticonTabClick;
+ (void)ReportCustomEmoticonManageIconClick;
+ (void)ReportEmoticonTabEntranceClick;
+ (id)ReportStringForEmoticonSyncOfAction:(unsigned long long)a0 andType:(unsigned long long)a1;
+ (void)ReportEmoticonBoardCustomEmojiShow:(unsigned long long)a0;
+ (void)ReportHasEmoticonToSyncOfType:(unsigned long long)a0;
+ (void)ReportAutoStartSyncOfType:(unsigned long long)a0;
+ (void)ReportEmoticonCustomManageAddClick;
+ (void)ReportEmoticonCustomManageEditClick;
+ (void)ReportEmoticonCustomManageEnterFromCell;
+ (void)ReportEmoticonCustomManageEnterFromOverLimitTips;
+ (void)ReportCustomEmoticonCountWhenStartRecover:(unsigned long long)a0 ofType:(unsigned long long)a1;

@end
