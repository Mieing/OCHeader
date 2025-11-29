@class WCFinderNetIconTextBtn, WCFinderFeedContentVM, NSString;
@protocol WCFinderJumpInfoInteractDelegate;

@interface WCFinderJumpIconTitleView : WCFinderJumpInfoView <WCFinderJumpInfoInteractable>

@property (retain, nonatomic) WCFinderNetIconTextBtn *iconTextBtn;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (weak, nonatomic) id<WCFinderJumpInfoInteractDelegate> interactDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentVM:(id)a1;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (void)updateUIInfo;
- (void)layoutViewByPosition;
- (void)setMaxWidth:(double)a0 maxTextAreaWidth:(double)a1;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
