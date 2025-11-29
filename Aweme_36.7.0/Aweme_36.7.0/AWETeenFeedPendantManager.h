@class AWETeenPendantModel;

@interface AWETeenFeedPendantManager : NSObject

@property (retain, nonatomic) AWETeenPendantModel *pendantSettings;
@property (nonatomic) BOOL pendantShowTracked;

+ (id)sharedInstance;

- (void)tryToShowPendant;
- (BOOL)shouldShowPendant;
- (void)trackTeenPendantClick;
- (void)trackTeenPendantHide;
- (id)pendantCacheKey;
- (void)p_trackTeenPendantLoadWithError:(id)a0 urlString:(id)a1;
- (void)trackTeenPendantShow;
- (void).cxx_destruct;

@end
