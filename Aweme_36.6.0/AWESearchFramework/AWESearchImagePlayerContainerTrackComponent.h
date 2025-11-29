@class AWESearchEventDispather, NSString, AWEGeneralSearchVideoCardModel, NSDictionary, AWESearchStandardImagePlayerModel;
@protocol AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchImagePlayerContainerTrackComponent : AWESearchComponent <AWESearchImagePlayerContainerTrackComponentProvider>

@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *cardModel;
@property (retain, nonatomic) AWESearchStandardImagePlayerModel *imagePlayerModel;
@property (nonatomic) BOOL searchDescClick;
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

- (id)awemeModel;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewDidStartShowing;
- (id)provideProtocol;
- (id)descTextTrackParams;
- (BOOL)isAlbumExpandedClickRegion;
- (id)anchorProvider;
- (id)getGeneralSearchTrackBaseParams;
- (id)coCreateTrackParams;
- (id)p_getVideoCardBtmDcmInfoDict;
- (id)p_context;
- (BOOL)isSearchOptimizeText;
- (void)trackSearchVideoShow;
- (void)videoTagClientTag;
- (id)p_componentContext;
- (void)trackProductShow;
- (void)trackVideoBottomBarShow;
- (void)trackImageAlbumSearchResultShow;
- (void)trackHotTipShow;
- (void).cxx_destruct;
- (id)init;

@end
