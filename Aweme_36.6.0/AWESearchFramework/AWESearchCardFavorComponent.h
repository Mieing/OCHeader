@class AWESearchCardFavorButton, AWESearchEventDispather, NSDictionary, NSString, NSMutableArray, AWESearchCardFavorModel;
@protocol AWESearchComponentProtocol, AWEAwemePlayInteractionInteractorProtocol, AWESearchContainerProtocol;

@interface AWESearchCardFavorComponent : AWESearchComponent <AWESearchCardFavorComponentProvider>

@property (retain, nonatomic) AWESearchCardFavorModel *model;
@property (retain, nonatomic) AWESearchCardFavorButton *favorButton;
@property (retain, nonatomic) NSMutableArray *broadCastArray;
@property (retain, nonatomic) id<AWEAwemePlayInteractionInteractorProtocol> interactor;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;

- (void)onAwemeFavoriteNotification:(id)a0;
- (void)componentDidLoad;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (id)provideProtocol;
- (id)broadcastProtocolList;
- (id)accessibilityElementsArr;
- (void)updateInteractor;
- (void)doSafeFavorite;
- (void)favorButtonClick;
- (void)fakeFavorModel;
- (void)fakeUnFavorModel;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;

@end
