@class NSData, WCFinderNativeDramaPromotionDataProvider, FinderPromotionAdGatingNativeDrama, WCFinderNativeDramaIAAFeedViewModelParams, WCFinderNativeDramaIAAFeedEpisodeInfo, NSMutableArray, WCFinderFeedContentVM;
@protocol WCFinderNativeDramaIAAFeedViewModelDelegate;

@interface WCFinderNativeDramaIAAFeedViewModel : NSObject

@property (retain, nonatomic) WCFinderNativeDramaIAAFeedViewModelParams *params;
@property (retain, nonatomic) WCFinderNativeDramaPromotionDataProvider *promotionDataProvider;
@property (retain, nonatomic) WCFinderNativeDramaIAAFeedEpisodeInfo *currentEpisode;
@property (retain, nonatomic) NSMutableArray *unlockEpisodes;
@property (retain, nonatomic) NSMutableArray *lockEpisodes;
@property (nonatomic) unsigned long long promotionState;
@property (nonatomic) unsigned long long unlockState;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) NSData *IAALastBuffer;
@property (weak, nonatomic) id<WCFinderNativeDramaIAAFeedViewModelDelegate> delegate;
@property (readonly, nonatomic) WCFinderNativeDramaIAAFeedEpisodeInfo *lastUnlockItem;
@property (readonly, nonatomic) FinderPromotionAdGatingNativeDrama *adGatingInfo;

- (id)initWithParams:(id)a0;
- (BOOL)haveNextUnLockItem;
- (id)unlockToast;
- (void)loadNextUnlockItem;
- (void)prefetchPromotion;
- (void)unlockItem;
- (void)_updateFinderObjectWithEpisodeID:(unsigned long long)a0;
- (void).cxx_destruct;

@end
