@class UIStackView, NSString, UIView, NSDictionary, IESECLiveGoodsListRelatedHorizontalModel, NSMutableArray, IESECLigoContext, IESECLiveContext;

@interface IESECLiveListRelatedHorizontalModuleView : UIView <IESECLigoComponentProtocol>

@property (retain, nonatomic) IESECLigoContext *ligoContext;
@property (retain, nonatomic) UIStackView *goodsStackView;
@property (retain, nonatomic) NSDictionary *basicTrackParams;
@property (retain, nonatomic) NSString *productIdList;
@property (retain, nonatomic) UIView *leftContentView;
@property (retain, nonatomic) UIView *rightContentView;
@property (retain, nonatomic) NSMutableArray *goodsViewArray;
@property (retain, nonatomic) IESECLiveGoodsListRelatedHorizontalModel *model;
@property (weak, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addGestureRecognizer;
- (id)goodsView;
- (id)initWithLigoContext:(id)a0;
- (void)updateWithModel:(id)a0 localAddParams:(id)a1;
- (void)trackWithEvent:(id)a0 additionParams:(id)a1 btm:(id)a2;
- (void).cxx_destruct;
- (void)setupUI;

@end
