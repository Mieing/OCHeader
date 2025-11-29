@class AWEMusicFeedViewModel, NSString, AWEMusicCollectionSongCellConfig, AWEMusicCollectionSongCell;
@protocol AWEMusicCollectionSongCellModelDelegate;

@interface AWEMusicCollectionSongCellModel : NSObject <AWEMusicCollectionCellViewModelProtocol>

@property (weak, nonatomic) AWEMusicCollectionSongCell *cell;
@property (retain, nonatomic) AWEMusicFeedViewModel *musicModel;
@property (retain, nonatomic) AWEMusicCollectionSongCellConfig *cellConfig;
@property (nonatomic) BOOL alwaysShowCollectButton;
@property (nonatomic) BOOL isRequestingCollect;
@property (weak, nonatomic) id<AWEMusicCollectionSongCellModelDelegate> delegate;
@property (nonatomic) BOOL shouldShowHighlightAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)cellHieght;
- (id)cellForTableView:(id)a0 indexPath:(id)a1;
- (BOOL)p_handleCollectEvent;
- (void)refreshCollectedStatus;
- (id)initWithMusicModel:(id)a0 alwaysShowCollectButton:(BOOL)a1;
- (void)refreshShowPlayIcon:(BOOL)a0 isPlaying:(BOOL)a1;
- (void).cxx_destruct;

@end
