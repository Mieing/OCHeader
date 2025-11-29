@class AWERichGoodsProgressView, NSString, AWEAwemeModel, UIView;
@protocol AWEPlayInteractionContextProtocol;

@interface AWERichAwemeGoodProgressBusinessImpl : NSObject <AWERichGoodsProgressViewDelegate, AWERichAwemeGoodsProgressElementBusinessProtocol>

@property (retain, nonatomic) AWERichGoodsProgressView *progressView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIView *aView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEPlayInteractionContextProtocol> playInteractionContext;

+ (BOOL)shouldShowElementWithContext:(id)a0;

- (void)updateProgressFromIndex:(long long)a0 toIndex:(long long)a1 method:(unsigned long long)a2;
- (BOOL)shouldShowElementWithModel:(id)a0;
- (void)updateWithContainerView:(id)a0 model:(id)a1;
- (void)elementWillDisplayWithModel:(id)a0;
- (void)goodsProgressScrollToIndex:(long long)a0;
- (void).cxx_destruct;

@end
