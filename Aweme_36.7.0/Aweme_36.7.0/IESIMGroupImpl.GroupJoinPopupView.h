@interface IESIMGroupImpl.GroupJoinPopupView : UIView <UIGestureRecognizerDelegate, UITableViewDelegate, UIScrollViewDelegate, UITableViewDataSource, IESIMGroupJoinPopupViewProtocol> {
    void /* unknown type, empty encoding */ InfoCellReuseIdentifier;
    void /* unknown type, empty encoding */ OtherGroupCellReuseIdentifier;
    void /* unknown type, empty encoding */ trackedGroupIDSet;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ keyBoardHeight;
    void /* unknown type, empty encoding */ originalFgFrame;
    void /* unknown type, empty encoding */ bgMaskView;
    void /* unknown type, empty encoding */ fgView;
    void /* unknown type, empty encoding */ handlerView;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ initialHeight;
    void /* unknown type, empty encoding */ maxHeight;
    void /* unknown type, empty encoding */ isAnimating;
    void /* unknown type, empty encoding */ viewModel;
}

- (void)didTapMoreButton;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)switchButtonStyle:(unsigned long long)a0 confirmBtnTitle:(id)a1 isConfirmBtnEnabled:(BOOL)a2;
- (void)updatePanelFrameWithKeyboardHeight:(double)a0 needAnimation:(BOOL)a1 duration:(double)a2 options:(unsigned long long)a3;
- (void)resetPanelToOriginalState;
- (void)show:(id /* block */)a0;
- (void)dismiss:(id /* block */)a0;
- (void)updateDelegate:(id)a0;
- (void)reloadTableView;
- (void)didTapMaskView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)handlePanGesture:(id)a0;

@end
