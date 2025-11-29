@class NSAttributedString, NSString, RichTextView, MMUILabel;

@interface WCMomentsBlankView : UIView <ILinkEventExt>

@property (retain, nonatomic) RichTextView *tipsTextView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (copy, nonatomic) NSString *richText;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTipsTextView;
+ (id)createTipsLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadTipsTextView;
- (void)loadTipsLabel;
- (void)displayTipsView:(id)a0;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
