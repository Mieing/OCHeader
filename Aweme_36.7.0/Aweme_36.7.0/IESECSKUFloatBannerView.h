@class IESECSKUFloatBannerItemView, NSString, NSMutableSet, IESECSKUTrustTagsModel, IESECSKUFloatBannerModel, IESECGCDTimer;
@protocol IESECSKUFloatBannerViewDelegate;

@interface IESECSKUFloatBannerView : UIView <IESECSKUFloatBannerViewItemDelegate>

@property (retain, nonatomic) IESECSKUFloatBannerModel *floatBanner;
@property (retain, nonatomic) IESECSKUTrustTagsModel *trustTags;
@property (retain, nonatomic) NSMutableSet *onShowModels;
@property (nonatomic) BOOL isTrustTag;
@property (nonatomic) BOOL needAnimation;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) unsigned long long nextDisplayIndex;
@property (retain, nonatomic) IESECGCDTimer *displayTimer;
@property (retain, nonatomic) IESECSKUFloatBannerItemView *displayItemView;
@property (weak, nonatomic) id<IESECSKUFloatBannerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_invalidateTimer;
- (void)floatBannerItemView:(id)a0 didShowedContents:(id)a1;
- (void)p_setupTimerIfNeeded;
- (void)p_showNextTopBannerWithAnimation;
- (id)initWithFloatBannerModel:(id)a0 trustTags:(id)a1 delegate:(id)a2;
- (void)didShowFloatBanner;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)setupUI;

@end
