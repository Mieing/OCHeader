@class UITapGestureRecognizer, WCSheetView, NSString;
@protocol KidsWatchBaseViewControllerDelegate;

@interface KidsWatchBaseViewController : MMUIViewController <UIScrollViewDelegate>

@property (nonatomic) BOOL allowTapEndEditing;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) BOOL firstResponderOnceToken;
@property (weak, nonatomic) id<KidsWatchBaseViewControllerDelegate> delegate;
@property (retain, nonatomic) WCSheetView *sheetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewWillBeInteractivePoped;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (long long)overrideUserInterfaceStyle;
- (double)maxContentWidth;
- (double)contentWidth;
- (BOOL)respondToKeyboardEvent;
- (BOOL)forceCloseBarButtonItem;
- (void)onTapDismissBarButtonItem;
- (void)onTapBackBarButtonItem;
- (void)onTapCloseBarButtonItem;
- (void)onTapGestureTap:(id)a0;
- (BOOL)shouldEndEditForTappedView:(id)a0;
- (void)initKeyboardEventListener;
- (void)keyboardWillChangeFrame:(id)a0;
- (void)onKeyboardWillChangeHeight:(double)a0;
- (void)onKeyboardChangingHeight:(double)a0;
- (void)becomeFirstResponderOnce;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;

@end
