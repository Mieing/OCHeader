@class NSString, AWERichAwemeLifeCardImageDescView, AWEAwemeModel, UITapGestureRecognizer;
@protocol AWEPlayInteractionContextProtocol;

@interface AWERichAwemeLifeCardImageDescBusinessImpl : NSObject <AWERichAwemeDescriptionElementBusinessProtocol>

@property (retain, nonatomic) AWERichAwemeLifeCardImageDescView *descriptionView;
@property (weak, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<AWEPlayInteractionContextProtocol> playInteractionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowElementWithContext:(id)a0;

- (void)hideExtraDescription;
- (BOOL)shouldShowDescriptionWithModel:(id)a0;
- (void)updateWithContainerView:(id)a0 model:(id)a1;
- (void)elementWillDisplayWithModel:(id)a0;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;

@end
