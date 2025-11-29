@class UIView, WCFinderComment, WCFinderFeedContentVM, WCFinderSizingRichTextView, NSString, UIImageView, WXMASConstraint, WCFinderRichTextView, UILabel;

@interface WCFinderCommentPreviewView : UIView <WCFinderQRCodeCgiDelegate, WCFinderPreviewView>

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderComment *mainComment;
@property (retain, nonatomic) UIView *contentContainer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) WCFinderRichTextView *nicknameLabel;
@property (retain, nonatomic) UIView *contactCard;
@property (retain, nonatomic) UIImageView *feedCover;
@property (retain, nonatomic) UIImageView *finderLogo;
@property (retain, nonatomic) WXMASConstraint *finderLogoTop;
@property (retain, nonatomic) WXMASConstraint *finderLogoCenter;
@property (retain, nonatomic) UILabel *contactNickname;
@property (retain, nonatomic) UIImageView *qrCodeView;
@property (retain, nonatomic) WCFinderSizingRichTextView *feedDescLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowLongPressActionView:(id)a0;
+ (id)makeImageLongPressActionView:(id)a0;
+ (void)handleJumpWithParams:(id)a0 actionType:(id)a1 fromNav:(id)a2 entryScene:(unsigned long long)a3 cardType:(int)a4;
+ (void)handleJumpWithCodeResp:(id)a0 fromNav:(id)a1 entryScene:(unsigned long long)a2 cardType:(int)a3;
+ (void)jumpToComment:(id)a0 encryptTid:(id)a1 nonceId:(id)a2 commentId:(unsigned long long)a3 fromNav:(id)a4 entryScene:(unsigned long long)a5 cardType:(int)a6;
+ (BOOL)supportPreview:(id)a0 contentVM:(id)a1;
+ (BOOL)commentHasPreviewContent:(id)a0;

- (id)previewType;
- (id)passArguments;
- (void)reportForward:(id)a0 commentScene:(int)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setComment:(id)a0 focus:(long long)a1;
- (void)qrcodeCgi:(id)a0 didGetResponse:(id)a1;
- (void)qrcodeCgi:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;

@end
