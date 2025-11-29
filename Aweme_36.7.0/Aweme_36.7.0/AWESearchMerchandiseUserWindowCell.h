@class AWESearchAutoPlayHandler, UIViewController, AWEDoubleColumnSearchMerchandiseModel, NSString, UIView, AWESearchMerchandiseUserWindowItemView, UILabel;
@protocol AWESearchMerchandiseUserWindowCellDelegate;

@interface AWESearchMerchandiseUserWindowCell : AWESearchCachalotECommerceBaseCell <AWEMSearchAutoPlayCard>

@property (retain, nonatomic) AWESearchMerchandiseUserWindowItemView *itemView;
@property (retain, nonatomic) UIView *dividingLine;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) AWESearchAutoPlayHandler *autoPlayHandler;
@property (retain, nonatomic) UILabel *adTagLabel;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (weak, nonatomic) id<AWESearchMerchandiseUserWindowCellDelegate> delegate;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (nonatomic) BOOL isFromECommerce;
@property (readonly, nonatomic) BOOL needPlayFinish;
@property (readonly, nonatomic) double playInterval;
@property (copy, nonatomic) id /* block */ playDidFinishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (id)identifier;

- (id)liveTransitionContext;
- (void)configWithModel:(id)a0;
- (void)trackCardShow;
- (void)configUI;
- (void)componentWillDisplay;
- (void)setSearchInfoDict:(id)a0;
- (void)configParentViewController:(id)a0;
- (id)resultSourceForModel:(id)a0;
- (void)configAdTagLabel;
- (void)resetMuteStatus;
- (id)carrierTypeForModel:(id)a0;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)transitionContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didResignActive;
- (id)activeView;
- (void)updateWithViewModel:(id)a0;

@end
