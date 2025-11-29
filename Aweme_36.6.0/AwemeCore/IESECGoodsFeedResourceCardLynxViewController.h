@class NSDictionary, NSString, IESECFeedResourceCardModel, IESECTracker, UIView, NSData, IESECGoodsDetailParameters;
@protocol IESHYContainerProtocol;

@interface IESECGoodsFeedResourceCardLynxViewController : UIViewController <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) NSString *currentLynxUrl;
@property (readonly, nonatomic) IESECFeedResourceCardModel *resourceCardModel;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *lynxData;
@property (retain, nonatomic) NSData *lynxTemplate;
@property (retain, nonatomic) IESECGoodsDetailParameters *goodsDetailParameter;
@property (retain, nonatomic) NSDictionary *trackerData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadLynxCardView;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
