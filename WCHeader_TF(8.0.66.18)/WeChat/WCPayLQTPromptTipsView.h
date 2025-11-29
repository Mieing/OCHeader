@class NSString, ComonPromptInfo, RichTextView, MMUILabel;
@protocol WCPayLQTPromptTipsViewDelegate;

@interface WCPayLQTPromptTipsView : UIView <ILinkEventExt>

@property (weak, nonatomic) id<WCPayLQTPromptTipsViewDelegate> delegate;
@property (retain, nonatomic) ComonPromptInfo *infoData;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) RichTextView *descTextView;
@property (retain, nonatomic) NSString *accessibilityContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initTipsViewWithDelegate:(id)a0 containerWidth:(double)a1;
- (void)setupContentWithTitle:(id)a0 desc:(id)a1 promptInfo:(id)a2;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)getTipsViewAccessibilityLabel;
- (void).cxx_destruct;

@end
