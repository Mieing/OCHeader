@class NSString, POIMediaListPageContext, MASViewAttribute, POIMediaListMediaModel, UIView;
@protocol POIMediaListStickyContainerProtocol, POIMediaAlbumPlayerDelegate, POIMediaListInteractorContainerProtocol, POIMediaPlayerViewDelegate;

@interface POIMediaListCell : UITableViewCell <POIMediaPlayerControllerProtocol, POIMediaAlbumControllerProtocol>

@property (nonatomic) double heightOffset;
@property (retain, nonatomic) MASViewAttribute *anchorTop;
@property (retain, nonatomic) MASViewAttribute *anchorBottom;
@property (retain, nonatomic) id<POIMediaListInteractorContainerProtocol> interactorContainer;
@property (weak, nonatomic) POIMediaListPageContext *context;
@property (weak, nonatomic) POIMediaListMediaModel *model;
@property (retain, nonatomic) UIView *cellContainer;
@property (retain, nonatomic) id<POIMediaListStickyContainerProtocol> cellHeaderContainer;
@property (retain, nonatomic) id<POIMediaListStickyContainerProtocol> cellFooterContainer;
@property (weak, nonatomic) id<POIMediaPlayerViewDelegate, POIMediaAlbumPlayerDelegate> videoDelegate;
@property (nonatomic) BOOL mute;
@property (readonly, nonatomic) long long currentPlayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tryReloadCellHeader;
- (void)tryReloadCellFooter;
- (void)albumScrollToIndex:(unsigned long long)a0;
- (void)updateWithMediaModel:(id)a0;
- (void)didSetInteractorContainer;
- (void).cxx_destruct;
- (BOOL)play;
- (BOOL)pause;
- (void)prepareForReuse;
- (BOOL)stop;
- (void)didTap;
- (void)willDisplay;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
