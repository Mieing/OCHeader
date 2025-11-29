@class NSString, AWESearchAIGCQueryTextView;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchAIGCQueryTextContainer : UIView <AWEMaskWindowHitTestProtocol, AWESearchAIGCShareProtocol>

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> bindViewModel;
@property (retain, nonatomic) AWESearchAIGCQueryTextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeForAttributeText:(id)a0 maxWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeForBubbleTextViewWithBubbleModel:(id)a0;
+ (struct CGSize { double x0; double x1; })calculateTextViewSizeWithModel:(id)a0 width:(double)a1 complete:(id /* block */)a2;
+ (id)multiLineFont;
+ (id)multiLineFontIgnoreFontScale;
+ (double)multiLineFontLineHeight;
+ (struct CGSize { double x0; double x1; })sizeForText:(id)a0 font:(id)a1 width:(double)a2 lineHeight:(double)a3 maxLine:(long long)a4;
+ (id)oneLineFont;
+ (id)oneLineFontIgnoreFontScale;
+ (double)oneLineFontLineHeight;
+ (id)createAttributeStringWithString:(id)a0;
+ (struct CGSize { double x0; double x1; })calculateContainerSizeWithModel:(id)a0 width:(double)a1;

- (BOOL)shareEnable;
- (void)windowHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 targetView:(id)a2;
- (id)bubbleModel;
- (void)bindActions;
- (void)showPopover:(id)a0;
- (unsigned long long)resultViewControllerQueryStyle;
- (id)shareSearchID;
- (BOOL)isOriginalAnswerWithdrawn;
- (BOOL)isAllRenderFinished;
- (BOOL)videoPublishEnable;
- (id)searchAIGCPostEntryText;
- (void)shareBegin;
- (void)shareEnd;
- (void)shareDidSelected;
- (void)shareCancelSelected;
- (void)trackSearchAIPanelWithEvent:(id)a0 panelType:(id)a1 buttonType:(id)a2;
- (void)queryTextViewResignFirstResponder;
- (void)reloadContainerForBubbleStyleWithViewModel:(id)a0;
- (void)reloadContainerForTittleStyleWithViewModel:(id)a0;
- (BOOL)searchAIGCDisablePopoverPublish;
- (id)cachalotResultContext;
- (void)setTitleQueryStyle;
- (void)reloadContainerWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)applicationWillResignActive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
