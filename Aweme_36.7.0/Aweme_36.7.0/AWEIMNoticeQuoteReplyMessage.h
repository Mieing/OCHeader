@class AWEIMLinkTextUtility, NSString, NSArray, NSDictionary, NSAttributedString, AWEURLModel;

@interface AWEIMNoticeQuoteReplyMessage : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMTextQuoteMessageProtocol>

@property (retain, nonatomic) AWEURLModel *urlModel;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *fileId;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *tosKey;
@property (nonatomic) int fileType;
@property (nonatomic) BOOL contentIsAvailable;
@property (retain, nonatomic) NSArray *templateArray;
@property (retain, nonatomic) AWEIMLinkTextUtility *textUtility;
@property (copy, nonatomic) NSAttributedString *contentTextString;
@property (copy, nonatomic) NSAttributedString *quoteTextString;
@property (copy, nonatomic) NSString *contentText;
@property (copy, nonatomic) NSString *quoteText;
@property (copy, nonatomic) NSString *gdLabel;
@property (copy, nonatomic) NSString *quoteName;
@property (copy, nonatomic) NSString *quoteContent;
@property (nonatomic) long long quoteNoticeType;
@property (copy, nonatomic) NSString *quoteTitle;
@property (copy, nonatomic) NSAttributedString *quoteAttributedContent;
@property (nonatomic) struct CGSize { double width; double height; } quoteAttributedContentSize;
@property (copy, nonatomic) NSArray *richTextInfos;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attributedContent;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)calculateAttributedContent;
- (BOOL)supportRefactorCell;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (BOOL)isAllowedEmojiReply;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)shouldChangeVisibleStatus;
- (BOOL)p_unavaliableDousanMessage;
- (BOOL)needShowContentModeCenter;
- (id)quoteTitleWithMaxWidth:(double)a0 title:(id)a1 tailString:(id)a2;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)contentAttributes;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
