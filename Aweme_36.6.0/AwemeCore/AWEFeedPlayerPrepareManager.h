@class NSMutableDictionary, UIViewController, AWEAwemeModel;
@protocol AWEAwemePlayVideoViewControllerProtocol;

@interface AWEFeedPlayerPrepareManager : NSObject

@property (retain, nonatomic) AWEAwemeModel *preparedModel;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol> *preparedPlayer;
@property (retain, nonatomic) NSMutableDictionary *preparedDict;

+ (id)sharedInstance;

- (BOOL)preparePlayerWithModel:(id)a0;
- (id)matchPreparedPlayerWithModel:(id)a0;
- (BOOL)preparePlayerWithReferString:(id)a0 awemeModel:(id)a1;
- (BOOL)preparePlayerWithReferString:(id)a0 awemeModel:(id)a1 canUseCachedPlayer:(BOOL)a2;
- (void)stopPrepareIfNeedWithReferString:(id)a0;
- (id)matchInitialPreparedPlayerWithReferString:(id)a0 awemeModel:(id)a1;
- (BOOL)preparePlayerWithOutPrerenderWithReferString:(id)a0 awemeModel:(id)a1 canUseCachedPlayer:(BOOL)a2;
- (void)prerenderPlayerWithReferString:(id)a0 awemeModel:(id)a1;
- (id)matchPreparedPlayerWithReferString:(id)a0 awemeModel:(id)a1;
- (void)removePreparedPlayerWithReferString:(id)a0;
- (BOOL)checkFeedModel:(id)a0;
- (BOOL)matchModel:(id)a0;
- (void)resetWithStop:(BOOL)a0;
- (BOOL)checkModel:(id)a0;
- (BOOL)checkSpecialModel:(id)a0;
- (BOOL)hasMatchedPlayerWithReferString:(id)a0 model:(id)a1;
- (BOOL)hasCachedPlayerWithReferString:(id)a0 model:(id)a1;
- (void)removePreparedPlayerWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
