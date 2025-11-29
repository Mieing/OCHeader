@class NSString, WCAdConventionalHalfScreenCustomBackgroundView;
@protocol WCAdContactInfoHalfScreenViewControllerDelegate;

@interface WCAdContactInfoHalfScreenViewController : ContactInfoViewController <MMPageSheetAdapterDelegate, WCAdConventionalHalfScreenCustomBackgroundViewDelegate>

@property (weak, nonatomic) id<WCAdContactInfoHalfScreenViewControllerDelegate> delegate;
@property (retain, nonatomic) WCAdConventionalHalfScreenCustomBackgroundView *customBackgroundView;
@property (nonatomic) BOOL isContactViewFullyVisible;
@property (nonatomic) BOOL isContactViewClosedByUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)profilePageSheetHeight;

- (double)fetchContactHalfScreenHeight;
- (void)showHalfScreenFromViewController:(id)a0 animated:(BOOL)a1;
- (id)getAdSheetAdapter;
- (BOOL)isContactInfoPageSheetClosedByUser;
- (void)dismissContactInfoPageSheetWithAnimated:(BOOL)a0;
- (id)onCustomBackgroundViewHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)pageSheetWillClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void)pageSheetDidClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void)pageSheetPresentAnimateDidEnd:(id)a0;
- (void)pageSheetDidChangeVisibleHeight:(id)a0 toHeight:(double)a1;
- (void).cxx_destruct;

@end
