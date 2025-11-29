@class StatusInfo;

@interface FLTStatusSheetRouterJumpReq : WXPBGeneratedMessage

@property (nonatomic) int sheetType;
@property (retain, nonatomic) StatusInfo *statusInfo;

+ (void)initialize;

@end
