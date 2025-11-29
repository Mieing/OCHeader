@class MMFinderLiveNewCustomGiftComponent, NSString, UIView, RichTextView, MMFinderLiveNewCustomGiftStyleObj;

@interface MMLiveRewardGiftNewCustomizationStyleSelectContentView : UIView <ILinkEventExt>

@property (nonatomic) long long contentMode;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) RichTextView *unsupportTipLabel;
@property (retain, nonatomic) MMFinderLiveNewCustomGiftComponent *currentConflictComponent;
@property (nonatomic) struct CGSize { double width; double height; } selfSize;
@property (readonly, nonatomic) MMFinderLiveNewCustomGiftStyleObj *styleObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutUI;
- (void)checkSelfSizeChanged;
- (void)layoutContentView;
- (void)layoutUnSupportTipLabel;
- (void)updateUnSupportTipLabelOrigin;
- (void)updateContentMode:(long long)a0;
- (void)updateUIForCurrentContentMode;
- (void)updateUnSupportTipWithConflictComponent:(id)a0;
- (id)getUnSupportTipWithConflictComponent:(id)a0;
- (void)onUnSupportTipLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)changeToUnSupportModeForConflictComponent:(id)a0;
- (void)changeToNormalMode;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
