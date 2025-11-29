@class UIImage, NSString;

@interface AWEIMExchangeImageMessage : AWEIMEncryptedImageMessage <AWEIMMsgRefreshMessageProtocol, AWEIMExchangeMessageProtocol>

@property (retain, nonatomic) UIImage *publishImage;
@property (retain, nonatomic) UIImage *quoteImage;
@property (nonatomic) long long exchangeRequestSeverMessageId;
@property (nonatomic) long long exchangeResponseSeverMessageId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getUniqueResourceId;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)generateForwardMessage;
- (BOOL)isUserCellType;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (id)quoteBizComponentName;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isRequestMessage;
- (BOOL)isExchangeLocationMessage;
- (long long)getContentExchangeRequestSeverMessageId;
- (void)updateWithMessage:(id)a0;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (struct CGSize { double x0; double x1; })coverSizeWhenQuotedIfHave;
- (BOOL)isResponseMessage;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end
