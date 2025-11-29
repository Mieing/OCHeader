@class UIImageView, RichTextView, NSString;
@protocol WCPayLQTInvalidTipsViewDelegate;

@interface WCPayLQTInvalidTipsView : UIView <ILinkEventExt>

@property (retain, nonatomic) UIImageView *invalidIconView;
@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) NSString *richTextContent;
@property (weak, nonatomic) id<WCPayLQTInvalidTipsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContent:(id)a0;
- (void)updateView;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
