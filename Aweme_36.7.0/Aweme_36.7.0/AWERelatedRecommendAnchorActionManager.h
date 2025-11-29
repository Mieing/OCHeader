@class NSString, UIViewController, AWEAwemeModel;
@protocol AWEPlayInteractionViewControllerProtocol;

@interface AWERelatedRecommendAnchorActionManager : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionViewController;

+ (id)anchorSupportList;

- (void)didTapAnchorViewWithType:(unsigned long long)a0;
- (void)trackAnchorViewShow;
- (void)enterGoodsDetail;
- (void)trackAnchorClick;
- (void)enterPoiDetail;
- (void)enterOpenPlatform;
- (void)enterPropDetail;
- (void)enterSkuDetail;
- (void)handlerPlaylistAnchorViewClicked;
- (void)handlerMusicStarAnchorViewClicked;
- (void).cxx_destruct;
- (id)commonDict;

@end
