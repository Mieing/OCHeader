@class IESIMExternalRefContent, NSString, UIBezierPath, AWEIMMessage, AWEIMMessageContent;
@protocol AWEIMMessageAudioContentProtocol;

@interface AWEIMAudioMessage : AWEIMMessage <AWEIMAudioMessageProtocol, AWEIMMsgRefreshMessageProtocol, AWEIMMessageConfigProtocol, IESIMExternalRefMessageProtocol>

@property (retain, nonatomic) AWEIMMessageContent<AWEIMMessageAudioContentProtocol> *content;
@property (retain, nonatomic) UIBezierPath *audioPowerPath;
@property (nonatomic) struct CGSize { double width; double height; } audioPowerPathSize;
@property (nonatomic) struct CGSize { double width; double height; } quoteTitleSize;
@property (nonatomic) struct CGSize { double width; double height; } quoteContentSize;
@property (copy, nonatomic) NSString *audioText;
@property (nonatomic) BOOL hasPrefetchText;
@property (retain, nonatomic) AWEIMMessage *quotedMsg;
@property (retain, nonatomic) IESIMExternalRefContent *externalRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;
+ (id)getStorableAudioText:(id)a0;
+ (void)setStorableAudioText:(id)a0 uniqueId:(id)a1;
+ (BOOL)getHasPrefetchText:(id)a0;
+ (void)setHasPrefetchText:(BOOL)a0 uniqueId:(id)a1;
+ (void)storageAudioText:(id)a0 withKey:(id)a1;

- (BOOL)isSupportForward;
- (id)messageTypeContent;
- (id)getUniqueResourceId;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)generateForwardMessage;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)getContent;
- (long long)p_audioPowerCountWithPowerArr:(id)a0 duration:(double)a1;
- (id)__forgeAudioPowersFromRealPowers:(id)a0;
- (id)__calculateMaximalValueFromArray:(id)a0 threshold:(unsigned long long)a1;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (id)quoteBizComponentName;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubblePaddingInset:(BOOL)a0;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (BOOL)isAllowedEmojiReply;
- (id)invisibleString;
- (void)updateWithMessage:(id)a0;
- (BOOL)isAttachmentAtLocal;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)needEnlargeMessageView;
- (double)getBothPathSpaceX;
- (double)getSinglePathWidth;
- (double)getMaxPathHeight;
- (double)getItemMaxHeight;
- (double)getItemMinHeight;
- (BOOL)isValidToDownload;
- (id)sendMessageAndResponseTrackerParams:(id)a0;
- (BOOL)isAttachmentMessage;
- (BOOL)isAttachmentAtRemote;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)contentIsAvailable;

@end
