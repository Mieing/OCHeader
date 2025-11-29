@class UIControl, UIStackView, NSString, AWEECOMIMBaseCardModel, UIView, AWEECOMIMPageClickUtil, UITableView;
@protocol AWEECOMIMCardComponentFailedViewProtocol, AWEECOMIMCardBaseViewDelegate, AWEECOMIMCardComponentLoadingViewProtocol;

@interface AWEECOMIMCardBaseView : UIView <AWEECOMIMCardViewProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIControl *cardTapView;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) long long cardState;
@property (retain, nonatomic) UIView<AWEECOMIMCardComponentFailedViewProtocol> *failedView;
@property (retain, nonatomic) UIView<AWEECOMIMCardComponentLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) AWEECOMIMBaseCardModel *cellModel;
@property (weak, nonatomic) id<AWEECOMIMCardBaseViewDelegate> delegate;
@property (weak, nonatomic) AWEECOMIMPageClickUtil *clickUtil;
@property (weak, nonatomic) UITableView *cellSuperView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithWidth:(double)a0 model:(id)a1;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })cardPaddings;
+ (id)buildFailedView;
+ (id)buildLoadingView;
+ (BOOL)isDynamicHeight;

- (BOOL)shouldShowBottomMoreItemView;
- (void)tapCard;
- (void)updateDynamicData;
- (void)refreshCardHeight;
- (void).cxx_destruct;
- (void)updateWithData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateData;

@end
