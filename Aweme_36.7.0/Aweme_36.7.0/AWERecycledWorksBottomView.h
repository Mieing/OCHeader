@class DUXButton;
@protocol AWERecycledWorksBottomViewDelegate;

@interface AWERecycledWorksBottomView : UIView

@property (retain, nonatomic) DUXButton *recoverBtn;
@property (retain, nonatomic) DUXButton *deleteBtn;
@property (weak, nonatomic) id<AWERecycledWorksBottomViewDelegate> delegate;

- (void)updateEnable:(BOOL)a0;
- (void)recoverBtnClick:(id)a0;
- (void)deleteBtnClick:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
