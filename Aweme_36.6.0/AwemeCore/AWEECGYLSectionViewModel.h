@class NSString, NSDictionary, UIView, IESECThrottleFirstCall;
@protocol IESECGYLSectionViewModelDelegate, IESECMallRecommendViewProtocol;

@interface AWEECGYLSectionViewModel : NSObject <IESECMallRecommendDelegate>

@property (nonatomic) BOOL lastVisible;
@property (retain, nonatomic) IESECThrottleFirstCall *throttleCall;
@property (retain, nonatomic) UIView<IESECMallRecommendViewProtocol> *recommendView;
@property (retain, nonatomic) NSDictionary *routerParam;
@property (weak, nonatomic) id<IESECGYLSectionViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildRecommendViewWithPageName:(id)a0;
- (void)handleRecommendViewVisibilityChange:(BOOL)a0;
- (void)addEcomSceneID:(id)a0;
- (BOOL)recommendViewIsDarkMode:(id)a0;
- (id)recommendViewCurrentRouterParam:(id)a0;
- (id)recommendViewCurrentEnterFrom:(id)a0;
- (id)recommendViewCustomGlobalProps:(id)a0;
- (void)recommendScrollViewDidCreated:(id)a0;
- (void)handleClickProductAndBackCeiling;
- (id)recommendViewLogExtraReport:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
