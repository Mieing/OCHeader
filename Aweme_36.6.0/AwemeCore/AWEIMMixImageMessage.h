@class NSString, AWEIMMixedPhotoStyleInfo, AWEURLModel;

@interface AWEIMMixImageMessage : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMImageMessageProtocol, AWEIMFeedMediaDisplayable, AWEIMEncryptedImageProtocol>

@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) long long taskType;
@property (copy, nonatomic) NSString *mixPushDetail;
@property (copy, nonatomic) NSString *mixDescription;
@property (readonly, nonatomic) long long playID;
@property (readonly, copy, nonatomic) NSString *mixStyle;
@property (readonly, nonatomic) long long playProgressDenominator;
@property (readonly, nonatomic) long long mixPhotosStatus;
@property (readonly, copy, nonatomic) NSString *overwriteMixingTitle;
@property (readonly, nonatomic) AWEIMMixedPhotoStyleInfo *styleInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *resURL;
@property (copy, nonatomic) NSString *resObjectID;
@property (copy, nonatomic) NSString *resSecretKey;
@property (copy, nonatomic) NSString *resMD5;
@property (copy, nonatomic) NSString *originMD5;
@property (nonatomic) long long resFileSize;
@property (readonly, nonatomic) AWEURLModel *resourceURLModel;
@property (readonly, nonatomic) AWEURLModel *largeResourceURLModel;
@property (readonly, nonatomic) AWEURLModel *mediumResourceURLModel;
@property (readonly, nonatomic) AWEURLModel *thumbResourceURLModel;
@property (nonatomic) struct CGSize { double width; double height; } coverSize;

+ (Class)viewModelClass;

- (id)jumpSchema;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)generateForwardMessage;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (id)quoteBizComponentName;
- (double)bubbleMaxHeight;
- (BOOL)showBubbleBorder;
- (BOOL)isAllowedEmojiReply;
- (id)mixedImageList;
- (id)commonParamsWithEnterFrom:(id)a0 enterMethod:(id)a1;
- (id)mixPhotosUserInfoList;
- (id)makeFeedMediaDisplayModel;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)isLora;
- (long long)mixedImageRealStatus;
- (BOOL)hasJoin;
- (id)publishSchema;
- (id)getSyncedExtDict;
- (BOOL)isAllowedForward;
- (struct CGSize { double x0; double x1; })coverSizeWhenQuotedIfHave;
- (BOOL)isRoleInit;
- (long long)mixedImageTrackStatus;
- (void)setStyleInfoWithDict:(id)a0;
- (id)p_mixPhotoInfo;
- (id)loraTaskId;
- (BOOL)showDuoshanTag;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (long long)updateTime;
- (void).cxx_destruct;
- (id)previewURL;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })displaySize;

@end
