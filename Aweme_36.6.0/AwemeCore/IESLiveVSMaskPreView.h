@class UIImageView, IESLiveImageView;
@protocol IESLiveWebPPlayer;

@interface IESLiveVSMaskPreView : UIView

@property (retain, nonatomic) IESLiveImageView *preImageView;
@property (retain, nonatomic) IESLiveImageView *closeView;
@property (retain, nonatomic) IESLiveImageView *openEggView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *giftWebpView;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void)appearAnimation;
- (void)disAppearAnimation;
- (void)closeViewDidClick;
- (void)openViewDidClick;
- (void)showImageStatusWithImage:(id)a0 action:(id /* block */)a1 closeBlock:(id /* block */)a2;
- (void)showGiftStatusWithAction:(id /* block */)a0 closeBlock:(id /* block */)a1;
- (void)setupSubViews;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;

@end
