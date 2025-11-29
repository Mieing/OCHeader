@class AWETheaterPageContext, NSString, BDXBridgeEventSubscriber, UIView, AWETheaterCardSectionItem;
@protocol AnnieXContainerBaseProtocol, AnnieXCardModelProtocol;

@interface AWEDynamicTheaterAnnieXCardCell : UICollectionViewCell <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *containerView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (retain, nonatomic) AWETheaterCardSectionItem *sectionItem;
@property (retain, nonatomic) AWETheaterPageContext *context;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (nonatomic) double startConfigCellTimeInterval;
@property (nonatomic) struct CGSize { double width; double height; } cardSize;
@property (copy, nonatomic) id /* block */ sizeChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerWillStartLoading:(id)a0;
- (void)container:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)container:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)removeSubscriber;
- (id)createAnnieXCard;
- (void)didReceiveStartRecordingScreen;
- (void)configWithSectionItem:(id)a0 context:(id)a1;
- (void)switchMuteStatus;
- (void)switchCardFocus:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)addObservers;

@end
