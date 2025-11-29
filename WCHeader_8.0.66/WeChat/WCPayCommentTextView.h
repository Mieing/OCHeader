@class NSString, WCUIAlertView;
@protocol WCPayCommentTextViewDelegate;

@interface WCPayCommentTextView : RichTextView <ILinkEventExt>

@property (retain, nonatomic) NSString *m_comment;
@property (retain, nonatomic) NSString *m_initComment;
@property (retain, nonatomic) NSString *m_modifyComment;
@property (retain, nonatomic) NSString *m_inputTitle;
@property (retain, nonatomic) NSString *m_placeHolder;
@property (nonatomic) unsigned int m_maxCommentLength;
@property (retain, nonatomic) WCUIAlertView *m_alertView;
@property (nonatomic) BOOL isShowingAlertView;
@property (weak, nonatomic) id<WCPayCommentTextViewDelegate> m_alertDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)updateInitComment:(id)a0;
- (void)updateModifyComment:(id)a0;
- (void)updateComment:(id)a0;
- (void)updateInputTitle:(id)a0;
- (id)commentText;
- (void)updateContent;
- (void)updateCommentMaxLength:(unsigned int)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)cancelComment;
- (void)confirmComment;
- (BOOL)isFirstResponder;
- (void)updatePlaceHolder:(id)a0;
- (void).cxx_destruct;

@end
