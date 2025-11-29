@class AWEAwemeModel, NSString, AWECommentGiphySearchResultWrapper, AWECommentGiphySearchResultCollectionView, UIView, NSDictionary, NSMutableOrderedSet, UILabel, AWETwoTuple;
@protocol AWECommentGiphySearchResultDelegate;

@interface AWECommentGiphySearchResultManager : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, AWECommentGiphySearchResultManagerProtocol>

@property (retain, nonatomic) AWECommentGiphySearchResultCollectionView *giphyCollectionView;
@property (retain, nonatomic) UILabel *emptyHintLabel;
@property (retain, nonatomic) NSMutableOrderedSet *showedGiphyIDSet;
@property (copy, nonatomic) NSString *searchLogID;
@property (retain, nonatomic) AWECommentGiphySearchResultWrapper *searchData;
@property (copy, nonatomic) NSString *searchingKeyword;
@property (copy, nonatomic) NSString *delaySearchKey;
@property (copy, nonatomic) NSDictionary *logPb;
@property (copy, nonatomic) id /* block */ performShowAnimationBlock;
@property (nonatomic) BOOL didSelectGIF;
@property (nonatomic) double WWANAdditionalDelayTime;
@property (retain, nonatomic) AWETwoTuple *lastEmojiShowContext;
@property (weak, nonatomic) id<AWECommentGiphySearchResultDelegate> delegate;
@property (copy, nonatomic) id /* block */ showOrDisappearBlock;
@property (copy, nonatomic) NSString *groupID;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) long long searchType;
@property (copy, nonatomic) NSDictionary *extraInputDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldValueWillChangedToString:(id)a0;
- (void)hideSearchResultView;
- (void)hideSearchResultView:(BOOL)a0;
- (BOOL)isAutoSearch;
- (long long)maxSearchLength;
- (void)configTheme:(BOOL)a0;
- (void)delaySearchKeyword:(id)a0;
- (void)searchGiphyWithKey:(id)a0 hasMore:(BOOL)a1 offset:(long long)a2;
- (void)p_performHideAfterDelay;
- (void)p_trackAutoLeaveAndRecord:(id)a0;
- (BOOL)reloadSearchCollectionViewWithData:(id)a0;
- (id)objectAtIndex:(id)a0 collectionView:(id)a1;
- (id)commentAutoSearchParam:(long long)a0 sticker:(id)a1 rank:(long long)a2;
- (id)extraTrackInputDict;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;

@end
