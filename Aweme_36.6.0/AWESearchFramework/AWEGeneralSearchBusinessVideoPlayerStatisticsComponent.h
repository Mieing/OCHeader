@class AWESearchEventDispather, AWESearchStandardVideoPlayerComponentModel, AWEGeneralSearchVideoCardModel, NSDictionary, NSString;
@protocol AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWEGeneralSearchBusinessVideoPlayerStatisticsComponent : AWESearchComponent <AWEGeneralSearchBusinessVideoPlayerStatisticsComponentProvider>

@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *cardModel;
@property (retain, nonatomic) AWESearchStandardVideoPlayerComponentModel *playerModel;
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

- (long long)searchAIAbstract;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewDidStartShowing;
- (id)anchorProvider;
- (id)p_getVideoCardBtmDcmInfoDict;
- (id)p_context;
- (void)trackSearchVideoShow;
- (void)videoTagClientTag;
- (id)p_componentContext;
- (void).cxx_destruct;

@end
