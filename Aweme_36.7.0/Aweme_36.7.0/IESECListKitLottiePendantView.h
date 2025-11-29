@class NSString, NSMutableDictionary, NSURL, LOTAnimationView, IESECListKitXBridgeEcLottieMountMethodParamModel, IESECListKitItemDataModel;

@interface IESECListKitLottiePendantView : UIView

@property (class, retain, nonatomic) NSMutableDictionary *lottiePendantViews;

@property (copy, nonatomic) NSString *clickId;
@property (copy, nonatomic) NSString *containerId;
@property (copy, nonatomic) NSString *envIdentifier;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (copy, nonatomic) IESECListKitXBridgeEcLottieMountMethodParamModel *currentParams;
@property (retain, nonatomic) IESECListKitItemDataModel *dataModel;

+ (id)showPendantInView:(id)a0 withParams:(id)a1 envIdentifier:(id)a2;
+ (BOOL)dismissLottiePendantView:(id)a0 uuid:(id)a1;
+ (id)findPendantViewWith:(id)a0;
+ (void)dismissLottiePendantView:(id)a0 containerId:(id)a1;
+ (void)removeAllPendantView;

- (id)findLottieJSONPath:(id)a0;
- (void)setupLottieView;
- (void)addToView:(id)a0;
- (void)removeCurrentView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;
- (void)tapHandler;

@end
