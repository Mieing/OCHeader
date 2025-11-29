@class NSMutableSet, CMessageWrap;

@interface HDImageExpireReporter : NSObject

@property (nonatomic) int openType;
@property (nonatomic) int closeType;
@property (nonatomic) int menuOpenType;
@property (nonatomic) int viewType;
@property (retain, nonatomic) NSMutableSet *actionSheetItems;
@property (retain, nonatomic) CMessageWrap *msgWrap;

+ (id)chatInfoForReport:(id)a0;
+ (void)reportClickMsg:(id)a0;
+ (void)reportClickViewHDMsg:(id)a0;
+ (void)reportSwitchToHDMsg:(id)a0;
+ (void)reportShowExpireLabel:(id)a0;
+ (void)reportShowPreviewAlbum:(id)a0;
+ (void)reportClickPreviewAlbum:(id)a0;

- (id)chatInfoForReport:(id)a0;
- (void)reportClickSaveButton:(id)a0 type:(int)a1;
- (void)reportPreviewAlbum:(id)a0 status:(int)a1;
- (id)onEnterImagePage:(id)a0;
- (void)reportPageChangeFrom:(id)a0 to:(id)a1;
- (id)onLeaveImagePage:(id)a0;
- (id)commonReportInfo:(id)a0;
- (id)commonReportInfoV2:(id)a0;
- (void)reportActionSheetExpose:(id)a0;
- (void)reportActionSheetButtonExpose:(id)a0 buttonType:(int)a1;
- (void)reportActionSheetButtonClick:(id)a0 buttonType:(int)a1;
- (void)reportActionSheetFooterExpose:(id)a0;
- (void)reportActionSheetFooterClick:(id)a0;
- (void)reportSaveActionSheetExpose:(id)a0;
- (void)reportSaveActionSheetClick:(id)a0;
- (void)reportSaveActionSheetCancel:(id)a0;
- (void).cxx_destruct;

@end
