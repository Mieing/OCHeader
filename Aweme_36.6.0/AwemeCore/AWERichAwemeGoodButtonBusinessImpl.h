@class NSString, AWEAwemeModel;
@protocol AWEPlayInteractionContextProtocol;

@interface AWERichAwemeGoodButtonBusinessImpl : NSObject <AWERichAwemeButtonElementBusinessProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEPlayInteractionContextProtocol> playInteractionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShowButtonWithModel:(id)a0;
- (void)updateWithContainerView:(id)a0 model:(id)a1;
- (void)elementWillDisplayWithModel:(id)a0;
- (id)convertColorToRGBA:(id)a0;
- (void)onButtonTap:(id)a0;
- (void)openGoodDetailPageWithModel:(id)a0;
- (void)p_elementDidShow;
- (void).cxx_destruct;

@end
