@class NSString;
@protocol AWEFeedShareReflowCardAndVideoDelegate;

@interface AWEFeedShareReflowCardAndVideoManager : NSObject <AWEFeedShareReflowCardAndVideoManagerProtocol>

@property (weak, nonatomic) id<AWEFeedShareReflowCardAndVideoDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)impressionShareReflowUser:(id)a0;
- (BOOL)shouldFetchCard:(id)a0 dataList:(id)a1 processModel:(id)a2;
- (void)fetchCardWithUID:(id)a0 completion:(id /* block */)a1;
- (BOOL)existedCardInPlayList:(id)a0 currentPlayIndex:(long long)a1;
- (BOOL)canInsertToListAfterFetchCard:(id)a0;
- (BOOL)isVideoBelongToShareReflow:(id)a0;
- (void)trackTokenFindReturnWhenVideoInsertToFeed:(id)a0;
- (BOOL)isCurrentHotFeedVC;
- (id)showRule:(id)a0;
- (void).cxx_destruct;

@end
