@class DUXPopover, NSString, AWEAwemeModel, AWELVideoAlbumInfoModel;

@interface AWELVAlbumFavoriteButton : AWECollectionButton <AWELVAlbumFavoriteButtonProtocol>

@property (nonatomic) long long buttonStyleType;
@property (retain, nonatomic) DUXPopover *favoritePopover;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfo;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) id /* block */ exitLandscapeCompletionBlock;
@property (copy, nonatomic) id /* block */ clickGotoPersonDetailBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithAlbumInfo:(id)a0 currentAwemeModel:(id)a1;
- (void)setupButtonForLandscape;
- (void)setupButtonForFeed;
- (void)didClickFavoriteButton:(id)a0;
- (void)collectionStatusChanged:(id)a0;
- (void)showFavoriteSuccessTips;
- (void)showCancelFavoriteSuccessTips;
- (void)trackCollectStatus:(BOOL)a0;
- (void)requestFavoriteAlbum:(BOOL)a0 completionBlock:(id /* block */)a1;
- (id)initWithFavoriteButtonStyleType:(long long)a0;
- (void)jumpToFavorite;
- (void).cxx_destruct;
- (void)setupUI;

@end
