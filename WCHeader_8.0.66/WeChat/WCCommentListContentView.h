@class UIView, WCDataItem, WCMomentsPageContext, NSString, WCCommentListContentBackgroundView, WCSNSMessage, RichTextView, WCUserComment, WCSpringWishButton;
@protocol WCCommentListContentViewDelegate;

@interface WCCommentListContentView : UIView <WCImageViewDelegate, ILinkEventExt, WCCommentEmotionViewDelegate, WCCommentBigEmoticonViewDelegate, RichTextEmoticonExtension>

@property (retain, nonatomic) UIView *rightestView;
@property (retain, nonatomic) RichTextView *contentTextView;
@property (retain, nonatomic) WCSNSMessage *message;
@property (retain, nonatomic) WCUserComment *comment;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) UIView *mediaView;
@property (retain, nonatomic) WCCommentListContentBackgroundView *backgroundView;
@property (retain, nonatomic) WCSpringWishButton *springWishBtn;
@property (retain, nonatomic) UIView *jumpPlaceHolder;
@property (weak, nonatomic) id<WCCommentListContentViewDelegate> delegate;
@property (retain, nonatomic) WCMomentsPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getContentViewHeight:(id)a0 dataItem:(id)a1 pageContext:(id)a2;
+ (BOOL)isAdvertiserPreferComment:(id)a0 dataItem:(id)a1;
+ (id)getAccessibilityStr:(id)a0 dataItem:(id)a1;
+ (unsigned long long)getDisplayContentParseType:(id)a0 dataItem:(id)a1;
+ (id)getDisplayName:(id)a0 dataItem:(id)a1;
+ (id)getDisplayContent:(id)a0 dataItem:(id)a1 pageContext:(id)a2;
+ (BOOL)displaySpringWishBtn:(id)a0 dataItem:(id)a1;

- (void)config:(id)a0 dataItem:(id)a1 width:(double)a2;
- (id)getRightestView;
- (void)addEmotionView:(id)a0;
- (void)handleImageTap:(id)a0;
- (void)handleEmoticonTap:(id)a0;
- (void)openEmotionDetailVC;
- (id)finderShareView:(id)a0;
- (id)finderLiveShareView:(id)a0;
- (BOOL)isAdvertiserPreferComment:(id)a0 dataItem:(id)a1;
- (BOOL)isAdvertiserComment:(id)a0 dataItem:(id)a1;
- (void)onHeadImageClicked:(id)a0;
- (void)onUserNameLableTapped:(id)a0;
- (void)onHeadImageDoubleClicked:(id)a0;
- (void)onHeadAdSpecialClick:(id)a0;
- (void)onClickWCImage:(id)a0;
- (void)WCCommentBigEmoticonView:(id)a0 didClickEmoticonView:(id)a1;
- (void)WCCommentBigEmoticonView:(id)a0 didLongPressEmoticonView:(id)a1;
- (void)WCCommentBigEmoticonViewSizeChange:(id)a0;
- (void)onTextLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onClickRichTextViewImageIcon:(id)a0 imageIconSrc:(id)a1 imageIconFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 richTextView:(id)a3;
- (void)onClickRichTextViewEmoticonThumb:(id)a0 thumbFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 richTextView:(id)a2;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)emojiInfoForMd5:(id)a0;
- (void)onEmoticonThumbLoadFailedForMd5:(id)a0;
- (void)onWCCommentEmotionViewSizeChange;
- (void)configSpringWishMsgDataReport:(id)a0;
- (id)genSpringWishMsgReportDict;
- (void)reportSnsMsgThumbnailClickEvent;
- (void)reportMsgClickEvent;
- (void)reportMsgEvent:(id)a0;
- (void).cxx_destruct;

@end
