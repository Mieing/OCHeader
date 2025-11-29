@class NSString, UIToolbar, UIScrollView, NSMutableArray, UIBarButtonItem;

@interface WCBaseKeyboardToolBar : NSObject <UIGestureRecognizerDelegate, MMTableViewInfoDelegate> {
    UIBarButtonItem *m_PreviousButtonItem;
    UIBarButtonItem *m_NextButtonItem;
    UIBarButtonItem *m_SpaceButtonItem;
    UIBarButtonItem *m_FinishButtonItem;
    UIToolbar *m_toolBar;
    UIScrollView *m_scrollView;
    double m_keyboardHeight;
    NSMutableArray *m_arrItem;
    long long m_uiCurrentItemIndex;
    BOOL m_bTouchHide;
    BOOL m_bNoAutoPostion;
    BOOL m_bScrollChangedResignFirstResponder;
    SEL m_scrollChangedAction;
    id m_scrollChangedTarget;
}

@property (nonatomic) BOOL bNeedManualKeyboardFrameChange;
@property (nonatomic) SEL manualSetAction;
@property (weak, nonatomic) id manualSetTarget;
@property (nonatomic) double keyboardBarHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setTouchHide:(BOOL)a0;
- (void)setNoAutoPostion:(BOOL)a0;
- (void)setScrollChangedResignFirstResponder:(BOOL)a0 Action:(SEL)a1 Target:(id)a2;
- (void)dealloc;
- (void)initToolBar;
- (id)getView;
- (void)removeAllItem;
- (void)addItem:(id)a0;
- (void)setScrollView:(id)a0;
- (BOOL)findCurrentActiveItem;
- (BOOL)setCurrentActiveItem:(id)a0;
- (void)initBtnItem;
- (void)initNotification;
- (void)changeKeyBoardSize:(id)a0;
- (void)sizeWhenBecameFirstResponder;
- (void)positionWhenBecameFirstResponder:(id)a0 withAnimated:(BOOL)a1;
- (void)setNeedManualKeyboardFrameChange:(BOOL)a0 target:(id)a1 action:(SEL)a2;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)keyboardDidShow:(id)a0;
- (void)keyboardDidHide:(id)a0;
- (void)keyboardDidChangeFrame:(id)a0;
- (void)keyboardWillChangeFrame:(id)a0;
- (void)UpdateBarButtonItem;
- (void)OnPreviousItem;
- (void)OnNextItem;
- (void)done;
- (void)mmTableView:(id)a0 touchesBegan:(id)a1 withEvent:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
