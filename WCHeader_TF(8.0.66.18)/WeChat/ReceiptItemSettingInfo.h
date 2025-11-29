@class ReceiptItemSettingInfo_JumpInfo, NSMutableArray;

@interface ReceiptItemSettingInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL enableReceiptItemSetting;
@property (retain, nonatomic) ReceiptItemSettingInfo_JumpInfo *currentShopJumpInfo;
@property (retain, nonatomic) NSMutableArray *shopListJumpInfo;

+ (void)initialize;

@end
