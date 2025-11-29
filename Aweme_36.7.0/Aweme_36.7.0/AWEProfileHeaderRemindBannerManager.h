@class AWEProfileRemindBannerCloseConfirmAlert, NSMutableDictionary, NSMutableArray;

@interface AWEProfileHeaderRemindBannerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *remindBannerHeightMap;
@property (retain, nonatomic) NSMutableArray *alreadyCloseRemindUids;
@property (nonatomic) BOOL hideRemindRightNow;
@property (retain, nonatomic) AWEProfileRemindBannerCloseConfirmAlert *alert;

+ (id)shareInstance;

- (void)dealloc;
- (BOOL)shouldShowRemindBannerWithUser:(id)a0;
- (double)heightOfRemindBannerWithUser:(id)a0;
- (void)onRemindCloseAnimateCompleted;
- (id)backgroundColorOfRemindBannerWithUser:(id)a0;
- (id)p_remindContentStringWithUser:(id)a0;
- (double)p_heightOfRemindBannerWithString:(id)a0;
- (id)textColorOfRemindBannerWithUser:(id)a0;
- (id)p_generateRemindWithString:(id)a0 textColor:(id)a1 enableTruncatingTail:(BOOL)a2 enableAttachment:(BOOL)a3;
- (double)p_computeHeightOfRemindString:(id)a0 enableAttachment:(BOOL)a1;
- (double)remindStringLineHeight;
- (id)fontOfRemindString;
- (id)p_arrowAttachmentWithColor:(id)a0;
- (id)p_colorWithColorString:(id)a0;
- (BOOL)hasAlreadyCloseRemindWithUid:(id)a0;
- (double)remindCloseButtonWidth;
- (double)remindInfoIconWidth;
- (id)p_paragraphStyleWithLineBreakByTruncatingTail:(BOOL)a0;
- (id)attributedStringOfRemindBannerWithUser:(id)a0;
- (id)truncationTokenOfRemindBannerWithUser:(id)a0;
- (id)iconUrlOfRemindWithUser:(id)a0;
- (void)showCloseConfirmAlertWithUser:(id)a0;
- (void)closeRemindBannerWithUser:(id)a0;
- (void)clickRemindLinkWithUser:(id)a0;
- (void).cxx_destruct;

@end
