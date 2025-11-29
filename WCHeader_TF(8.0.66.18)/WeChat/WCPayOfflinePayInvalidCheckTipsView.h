@class UIButton, NSString, UIImageView, RichTextView, MMUILabel;
@protocol WCPayOfflinePayInvalidCheckTipsViewDelegate;

@interface WCPayOfflinePayInvalidCheckTipsView : MMUIView <ILinkEventExt>

@property (weak, nonatomic) id<WCPayOfflinePayInvalidCheckTipsViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (nonatomic) BOOL bIsInitFromScreenCapturing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initInvalidTipsViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)setupContentView;
- (void)confirmBtnPress:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
