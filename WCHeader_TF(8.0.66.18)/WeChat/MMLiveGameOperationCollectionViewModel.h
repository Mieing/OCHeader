@class MMTimer, UICollectionView, NSString, NSMutableArray, FinderLiveGetUserGameConfigResponse_GameActivityBanner_GameActivityBannerInfo;

@interface MMLiveGameOperationCollectionViewModel : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) NSMutableArray *operationActivities;
@property (nonatomic) unsigned int scrollInterval;
@property (nonatomic) BOOL isScrolling;
@property (retain, nonatomic) FinderLiveGetUserGameConfigResponse_GameActivityBanner_GameActivityBannerInfo *lastVisibleActiviy;
@property (nonatomic) BOOL isAutoScrollInterrupt;
@property (retain, nonatomic) MMTimer *timer;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ selectCallback;
@property (copy, nonatomic) id /* block */ exposeCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportForActiviyExpose:(id)a0;
+ (void)reportForActiviyClick:(id)a0;

- (id)init;
- (void)dealloc;
- (void)updateOperationActivities:(id)a0;
- (void)startScrollWithInterval:(unsigned int)a0;
- (void)cancelAutoScroll;
- (unsigned long long)activitiesCount;
- (void)invokeAutoScroll;
- (void)scrollCollectionViewToNext;
- (void)onOperationActivityDidSelect:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void).cxx_destruct;

@end
