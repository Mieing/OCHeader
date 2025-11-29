@class NSArray, NSMutableDictionary, NSString;
@protocol AWEScreenCastProcessorDelegate;

@interface AWEScreenCastShortVideoProcessor : NSObject <AWEScreenCastProcessor>

@property (copy, nonatomic) NSArray *castVideoInfos;
@property (copy, nonatomic) NSArray *currentFetchVideoArray;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSMutableDictionary *vidMap;
@property (weak, nonatomic) id<AWEScreenCastProcessorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canContinuePlay;
- (BOOL)supportCastWithModel:(id)a0;
- (void)prefetchPlayItemWithModel:(id)a0;
- (void)fetchPlayItemWithModel:(id)a0 withCompletion:(id /* block */)a1;
- (id)filterUnSupportedModelsWith:(id)a0;
- (void)prefetchPlayItemsWithModels:(id)a0 fromVideoID:(id)a1;
- (id)findNextSupportedModelWithModels:(id)a0 fromIndex:(long long)a1;
- (BOOL)shouldPlayNextWhenPlayOver;
- (void)recordToWatchHistoryWithModel:(id)a0;
- (void)fetchPlayItemsWithModels:(id)a0 fromVideoID:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)supportPreRedirect;
- (id)getFirstPlayItemFromVideoInfo:(id)a0;
- (void)fetchScreenCastVideoInfoWithList:(id)a0 completion:(id /* block */)a1;
- (id)transformVideosFromModels:(id)a0 fromVideoID:(id)a1;
- (id)transformCastPlayItemsFromVideoInfos:(id)a0;
- (BOOL)isLandscapeFeed;
- (void)appendCastVideoInfos:(id)a0;
- (void)trackGetPlayInfoFailed:(id)a0 videoID:(id)a1;
- (id)transformCastPlayItemFromVideoInfo:(id)a0;
- (void).cxx_destruct;

@end
