@class UIView, NSString, WCCommentBigEmoticonAddHelper, WCDataItem, WCCommentRichTextView, EmoticonCustomManageAddLogic, UIButton, WCMomentsClickHandler, RichTextView, WCUserComment, UIScrollView;

@interface WCTextDetailViewController : MMUIViewController <RichTextLayoutDelegate, ILinkEventExt, ITranslateSnsMgrExt, RichTextEmoticonExtension> {
    UIScrollView *_bgScrollView;
    WCDataItem *_dataItem;
    NSString *_copyedText;
    WCCommentRichTextView *_contentDescView;
    NSString *_contentDesc;
    RichTextView *m_translateView;
    UIButton *m_translateStatusView;
    UIView *m_translateLineView;
    int eTranslateStatus;
    WCUserComment *m_userComment;
    BOOL m_isAdComment;
    unsigned int m_scene;
}

@property (readonly, nonatomic) WCMomentsClickHandler *clickHandler;
@property (retain, nonatomic) UIView *jumpPlaceHolder;
@property (retain, nonatomic) EmoticonCustomManageAddLogic *addEmoticonLogic;
@property (retain, nonatomic) WCCommentBigEmoticonAddHelper *bigEmoticonAddHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeDataWrapForWCTranslate:(id)a0;

- (void)onMenuControllerWillHide:(id)a0;
- (id)initWithDataItem:(id)a0;
- (id)initWithCommentUserInfo:(id)a0 fromDataItem:(id)a1 isAdComment:(BOOL)a2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupTitle;
- (void)reloadView;
- (void)viewDidLayoutSubviews;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)onCopy:(id)a0;
- (void)onSearch:(id)a0;
- (void)onFavAdd:(id)a0;
- (void)onFavAddForTranslated:(id)a0;
- (void)onAddEmotion:(id)a0;
- (void)onTextLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onClickRichTextViewImageIcon:(id)a0 imageIconSrc:(id)a1 imageIconFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 richTextView:(id)a3;
- (void)onClickRichTextViewEmoticonThumb:(id)a0 thumbFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 richTextView:(id)a2;
- (id)emojiInfoForMd5:(id)a0;
- (void)onEmoticonThumbLoadFailedForMd5:(id)a0;
- (void)onExpose:(id)a0;
- (void)showMenuItemForText:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isWord:(BOOL)a2 withView:(id)a3;
- (void)onLinkLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)onPhoneLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)onTextLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)onSearchTopicLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)viewWillBePoped:(BOOL)a0;
- (void)onSearchTopicClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)payTagParam:(id)a0;
- (id)GetTranslateSnsKeyID;
- (void)onTranslate:(id)a0;
- (void)_doTranslate;
- (void)onCancelTranslate:(id)a0;
- (void)onCancelTranslateInTranslatedArea:(id)a0;
- (void)onChangeTranslateLanguage:(id)a0;
- (double)initContentTranslateView:(id)a0 andSuperScrollView:(id)a1;
- (double)initTranslateStatusButton:(BOOL)a0 withTitle:(id)a1;
- (void)onTranslateSnsFailed:(id)a0 errTip:(id)a1;
- (void)onTranslateSnsChanged:(id)a0;
- (void)momentsContactMgr:(id)a0 didUpdateContact:(id)a1;
- (void)reportMenuAction:(long long)a0;
- (BOOL)isCorrectTranslateDataWrap:(id)a0;
- (BOOL)isTimelineTranslateDataWrap:(id)a0;
- (BOOL)isCommentTranslateDataWrap:(id)a0;
- (id)getSnsTranslateDataWrap;
- (id)getContentDesc:(BOOL)a0;
- (BOOL)canShowFavBtn;
- (void)reportSnsEmoAddClickEvent:(id)a0;
- (void).cxx_destruct;

@end
