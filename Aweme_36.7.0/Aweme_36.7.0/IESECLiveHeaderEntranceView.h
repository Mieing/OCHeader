@class IESECLiveGoodsListHeaderPromotionComponentModel, NSString, IESECLiveGoodsListHeaderPromotionContentItemModel, UIView, IESECGCDTimer, NSMutableArray;
@protocol IESECLiveHeaderEntranceViewDelegate;

@interface IESECLiveHeaderEntranceView : UIView <IESECLiveConfigViewDelegate>

@property (retain, nonatomic) IESECGCDTimer *timer;
@property (nonatomic) unsigned long long indexOfTitles;
@property (retain, nonatomic) NSMutableArray *rightViewArray;
@property (retain, nonatomic) UIView *contentView;
@property (readonly, nonatomic) IESECLiveGoodsListHeaderPromotionContentItemModel *currentRightViewModel;
@property (readonly, nonatomic) NSString *currentEntranceText;
@property (retain, nonatomic) IESECLiveGoodsListHeaderPromotionComponentModel *rightModel;
@property (weak, nonatomic) id<IESECLiveHeaderEntranceViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowView:(id)a0;

- (void)configViewShouldClose:(id)a0;
- (void)initRightViewArrayWithRightItemArray:(id)a0;
- (BOOL)isValideRotationWithRightModel:(id)a0;
- (void)updateUIWithAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)currentRightView;
- (void)setupUI;

@end
