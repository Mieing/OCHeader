@class AWESearchEventDispather, NSString, AWESearchCardShareButton, NSDictionary, AWESearchCardShareModel, NSMutableArray;
@protocol AWESearchComponentProtocol, AWEAwemePlayInteractionInteractorProtocol, AWESearchContainerProtocol;

@interface AWESearchCardShareComponent : AWESearchComponent <AWESearchCardShareComponentProvider>

@property (retain, nonatomic) AWESearchCardShareModel *model;
@property (retain, nonatomic) AWESearchCardShareButton *shareButton;
@property (retain, nonatomic) id<AWEAwemePlayInteractionInteractorProtocol> interactor;
@property (retain, nonatomic) NSMutableArray *broadCastArray;
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

- (void)componentDidLoad;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (id)provideProtocol;
- (id)broadcastProtocolList;
- (id)accessibilityElementsArr;
- (id)p_context;
- (void)updateInteractor;
- (void)shareButtonClick;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;

@end
