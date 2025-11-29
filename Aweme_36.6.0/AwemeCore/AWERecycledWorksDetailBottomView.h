@class UIButton;
@protocol AWERecycledWorksBottomViewDelegate;

@interface AWERecycledWorksDetailBottomView : UIView

@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIButton *recoverButton;
@property (weak, nonatomic) id<AWERecycledWorksBottomViewDelegate> delegate;

- (void)didClickDeleteButton;
- (void)didClickRecoverButton;
- (void).cxx_destruct;
- (id)init;

@end
