@interface WCFinderProfileFeedHelper : NSObject

+ (id)cellConfigForContentVM:(id)a0 fullScreen:(BOOL)a1 useStreamCell:(BOOL)a2 justWatchInfo:(id)a3 halfScreen:(BOOL)a4 hiddenSticker:(BOOL)a5 showPostTime:(BOOL)a6 useFullCover:(BOOL)a7;
+ (id)cellForContentVM:(id)a0 inCollectionView:(id)a1 indexPath:(id)a2 coverCost:(id)a3 config:(id)a4;
+ (id)findCellWithTid:(id)a0 inCollectionView:(id)a1 indexPath:(id *)a2;
+ (void)onClickFeedCollection:(id)a0 fromVC:(id)a1 username:(id)a2 justWatchItem:(id)a3 complete:(id /* block */)a4;
+ (void)goCollectionFeedListWithDataFetcher:(id)a0 destinationFeedID:(id)a1 autoPresentCollectionHalfScreen:(BOOL)a2 username:(id)a3 fromVC:(id)a4 complete:(id /* block */)a5;
+ (void)checkFinderSwitch:(id /* block */)a0;
+ (id)findShowPostTimeFeedTid:(id)a0;

@end
