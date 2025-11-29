@class NSString, NSMutableArray;
@protocol AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate;

@interface AWEAIVideoClipFavoriteMusicSelectView : AWEAIVideoClipMusicSelectView <UIScrollViewDelegate>

@property (retain, nonatomic) NSMutableArray *musicList;
@property (nonatomic) BOOL isFetchingMore;
@property (nonatomic) BOOL isLoading;
@property (weak, nonatomic) id<AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateMusicList:(id)a0;
- (void)updateCollectionViewState;
- (id)newCollectionView;
- (void)updateLoading:(BOOL)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)updateContentInset;

@end
