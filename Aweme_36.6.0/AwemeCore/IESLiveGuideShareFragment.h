@class IESLiveGuideToolBarItem, IESLiveSafetyCheckManager, RACCompoundDisposable;
@protocol IESLiveGuideToolBarProvider, IESLiveShareService;

@interface IESLiveGuideShareFragment : IESLiveGuideComponent

@property (retain, nonatomic) id<IESLiveShareService> shareService;
@property (retain, nonatomic) id<IESLiveGuideToolBarProvider> guideToolbarProvider;
@property (retain, nonatomic) IESLiveGuideToolBarItem *shareToolbarItem;
@property (retain, nonatomic) RACCompoundDisposable *disposeBag;
@property (retain, nonatomic) IESLiveSafetyCheckManager *safeManager;

- (void)componentMount;
- (void)componentUnmount;
- (id)getTrackParamsWithItem:(id)a0;
- (void)p_addShareToolbarItem;
- (void)p_didClickShareButton:(id)a0;
- (void)trackShareBtnClicked:(id)a0;
- (void).cxx_destruct;

@end
