@class UIStackView, NSString, NSArray, IESECGoodsSoldOutModel, IESECSKUBottomViewModel, IESECSKUBottomSoldOutView, NSMutableArray, IESECSKUBottomTipsView, NSObject, UILabel, IESECSKUDetailContext;
@protocol OS_dispatch_source, IESECSKUBottomViewDelegate;

@interface IESECSKUBottomView : UIView <IESECSKUBottomSoldOutViewDelegate, IESECSKUBottomViewProtocol>

@property (retain, nonatomic) UILabel *countdownLabel;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) IESECSKUBottomSoldOutView *soldOutView;
@property (copy, nonatomic) NSArray *buttonModels;
@property (retain, nonatomic) UIStackView *buttonStackView;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) IESECSKUBottomTipsView *tipsView;
@property (retain, nonatomic) NSString *curSkuID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECSKUBottomViewModel *viewModel;
@property (retain, nonatomic) IESECGoodsSoldOutModel *soldOutModel;
@property (weak, nonatomic) id<IESECSKUBottomViewDelegate> delegate;
@property (weak, nonatomic) IESECSKUDetailContext *detailContext;

- (void)soldOutCountDownDidFinish;
- (BOOL)isShowSoldOut;
- (void)disableConfirmButton;
- (void)enableConfirmButton;
- (void)updateSoldOutInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupTimer;
- (void)setupView;
- (double)viewHeight;
- (void)setupButtons;
- (void)reloadView;
- (void)confirm:(id)a0;

@end
