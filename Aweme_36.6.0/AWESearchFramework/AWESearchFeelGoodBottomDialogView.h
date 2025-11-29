@class AWESearchFeelGoodBottomDialogContentView, AWESearchFeelGoodDataModel;

@interface AWESearchFeelGoodBottomDialogView : AWESearchFeelGoodElementView {
    BOOL _isOnlySupportLightMode;
}

@property (retain, nonatomic) AWESearchFeelGoodBottomDialogContentView *contentView;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (retain, nonatomic) AWESearchFeelGoodDataModel *model;

- (BOOL)isOnlySupportLightMode;
- (void)setIsOnlySupportLightMode:(BOOL)a0;
- (void)p_dismissEntranceWithAnimation:(BOOL)a0;
- (void)p_showEntrnceView;
- (void)dismissEntrance;
- (void)showEntrnceViewWithModel:(id)a0 completion:(id /* block */)a1;
- (void)dismissPopups;
- (void)feedbackViewTapped;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)setupConfig;

@end
