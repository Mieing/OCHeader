@class AWERichAwemeLifeCardImagePOIInfoView, NSString, AWERichAwemeLifeCardImagePriceView, AWEAwemeModel, UIView, UITapGestureRecognizer;
@protocol AWEPlayInteractionContextProtocol;

@interface AWERichAwemeLifeCardImagePriceBusinessImpl : NSObject <AWERichAwemeCustomInfoElementBusinessProtocol>

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWERichAwemeLifeCardImagePOIInfoView *infoView;
@property (retain, nonatomic) AWERichAwemeLifeCardImagePriceView *priceView;
@property (weak, nonatomic) id<AWEPlayInteractionContextProtocol> playInteractionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowElementWithContext:(id)a0;
+ (BOOL)shouldShowPOIInfoView:(id)a0;
+ (BOOL)shouldShowPriceInfoView:(id)a0;

- (BOOL)shouldShowPriceWithModel:(id)a0;
- (void)updateWithContainerView:(id)a0 model:(id)a1;
- (void)elementWillDisplayWithModel:(id)a0;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;

@end
