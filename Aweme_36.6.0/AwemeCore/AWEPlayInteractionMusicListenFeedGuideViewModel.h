@class NSString, AWEPlayInteractionContext;

@interface AWEPlayInteractionMusicListenFeedGuideViewModel : NSObject

@property (copy, nonatomic) NSString *currentID;
@property (nonatomic) BOOL canShowListenFeedEntry;
@property (retain, nonatomic) AWEPlayInteractionContext *context;

- (BOOL)shouldShowListenFeedCoverWithAweme:(id)a0;
- (BOOL)enableEnterListenFeedWithAweme:(id)a0;
- (void)trackForListenFeedCoverShow;
- (void)trackForListenFeedCoverClick;
- (void).cxx_destruct;

@end
