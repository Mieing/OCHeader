@class UIViewController, AWEAwemeModel, UIView, BDImageView;
@protocol AWEPlayInteractionViewControllerProtocol, AWEAdTigerFromEastManager;

@interface AWEAdTigerEggManager : NSObject

@property (retain, nonatomic) BDImageView *tigerEggView;
@property (retain, nonatomic) UIView *maskView;
@property (nonatomic) long long showTigerEggViewFailType;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionVC;
@property (nonatomic) BOOL hasEnterTargetPage;
@property (weak, nonatomic) id<AWEAdTigerFromEastManager> delegate;

+ (void)preFetchDataIfNeeded:(id)a0 isTV:(BOOL)a1;
+ (void)removeTVPreFetchData:(id)a0;
+ (void)removeFeedPreFetchData;
+ (void)initTigerEggCache;
+ (void)trackTigerEgg:(id)a0 resultType:(long long)a1 extraData:(id)a2 awemeModel:(id)a3 preLoadType:(long long)a4;

- (void)trackWithEvent:(id)a0 label:(id)a1 refer:(id)a2 extraData:(id)a3;
- (void)trackTigerEgg:(id)a0 resultType:(long long)a1 extraData:(id)a2 preLoadType:(long long)a3;
- (void)setupTigerEggWithImage:(id)a0;
- (void)finishPlayTigerEgg;
- (void)preLoadData:(id)a0;
- (void)playTigerEggWithInteractionVC:(id)a0;
- (void)setPlayVideoMute:(BOOL)a0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
