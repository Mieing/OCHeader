@class NSString, UIImageView, IESLiveGiftAssemblyCustomizedCardConfig, UIView, UILabel;
@protocol IESLiveGiftAssemblyCustomizedCardViewDelegate;

@interface IESLiveGiftAssemblyCustomizedCardView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) IESLiveGiftAssemblyCustomizedCardConfig *config;
@property (weak, nonatomic) id<IESLiveGiftAssemblyCustomizedCardViewDelegate> delegate;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *cardImageView;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) UILabel *subLabel;
@property (retain, nonatomic) UIImageView *selectedBorderImageView;
@property (retain, nonatomic) UIImageView *statusIconView;
@property (retain, nonatomic) UIView *topRightView;
@property (retain, nonatomic) UILabel *topRightLabel;
@property (retain, nonatomic) UIView *remindPointView;
@property (nonatomic) unsigned long long showType;
@property (nonatomic) BOOL isShowingOnScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCardWithConfig:(id)a0;
- (void)p_didTapCustomizedCard;
- (void)updateUIWithLockStatus:(long long)a0;
- (void)p_updateUIWithShowRemindPointRemind:(BOOL)a0;
- (void)p_updateUIWithLabelText:(id)a0;
- (void)p_didExposeCustomizedCard;
- (void)h_clearCardCache;
- (void)updateCardOnSelection:(BOOL)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setupViews;
- (id)initWithConfig:(id)a0 delegate:(id)a1;

@end
