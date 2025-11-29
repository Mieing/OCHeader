@class UIImageView, IESECLiveCombinationBlockElementModel, UIView;
@protocol IESECLiveConfigViewDelegate;

@interface IESECLiveCombinationBlockView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (weak, nonatomic) id<IESECLiveConfigViewDelegate> delegate;
@property (retain, nonatomic) IESECLiveCombinationBlockElementModel *combinationBlockModel;

- (void)clickAction;
- (void)p_didShow;
- (id)initWithDelegate:(id)a0 contentView:(id)a1 model:(id)a2;
- (void).cxx_destruct;
- (void)setupUI;

@end
