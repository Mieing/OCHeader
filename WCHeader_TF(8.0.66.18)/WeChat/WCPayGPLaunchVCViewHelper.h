@interface WCPayGPLaunchVCViewHelper : NSObject

+ (double)getModeChangeCellHeightWithCurentLaunchType:(unsigned long long)a0;
+ (double)commonCellHeight;
+ (double)commonCellWidth;
+ (double)calcCellHeightWithLeftContent:(id)a0 rightContent:(id)a1 hasArrow:(BOOL)a2 minHeight:(double)a3 breakLeft:(BOOL)a4;
+ (double)getCommonAATotalAmountEditCellHeight;
+ (double)getCommonAATotalMemberEditCellHeight:(id)a0;
+ (double)getCustomizeAAPayerTipsCellHeight;
+ (double)getCustomizeAAGroupMemberCountTipsCellHeight;
+ (double)getActivityAAPayerCountCellHeight;
+ (double)getActivityAAPayerDetailCellHeightWithNickname:(id)a0 amount:(double)a1;
+ (void)setupThemeEdtiViewContent:(id)a0 themeContent:(id)a1 remarkImage:(id)a2 remarkImgUrl:(id)a3 remarkImgSign:(id)a4;
+ (void)setupModeChangeCellContent:(id)a0 curlaunchType:(unsigned long long)a1;
+ (void)setupTotalAmountCellContent:(id)a0 amountString:(id)a1;
+ (void)setupToalMemberCellContent:(id)a0 content:(id)a1 title:(id)a2;
+ (void)setupCustomizePayerTipsCellContent:(id)a0;
+ (void)setupCustomizeGroupMemberTipsCellContent:(id)a0 richContent:(id)a1;
+ (void)setupActivityAATitleCellContent:(id)a0 selectedMemberCount:(long long)a1;
+ (void)setupActivityAADetailCellContent:(id)a0 payerNickname:(id)a1 amount:(double)a2 isLastCell:(BOOL)a3;

@end
