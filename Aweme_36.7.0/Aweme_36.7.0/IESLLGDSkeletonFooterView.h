@protocol IESLLGDSkeletonFooterViewDelegate;

@interface IESLLGDSkeletonFooterView : UIView

@property (nonatomic) BOOL btnEnableClick;
@property (weak, nonatomic) id<IESLLGDSkeletonFooterViewDelegate> delegate;

- (id)initWithEnableClick:(BOOL)a0;
- (void)onClickConfirmBtn:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
