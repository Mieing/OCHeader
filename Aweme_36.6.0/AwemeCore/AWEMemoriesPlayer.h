@class NLEModel_OC, NLEInterface_OC;
@protocol AWEMemoriesPlayerDelegate;

@interface AWEMemoriesPlayer : NSObject

@property (retain, nonatomic) NLEInterface_OC *session;
@property (retain, nonatomic) NLEModel_OC *nleModel;
@property (weak, nonatomic) id<AWEMemoriesPlayerDelegate> delegate;
@property (nonatomic, getter=isMuted) BOOL muted;

+ (id)sharedPlayer;

- (void)playModel:(id)a0 draftFolder:(id)a1 displayView:(id)a2 isContinuePlay:(BOOL)a3 delegate:(id)a4 contentMode:(long long)a5;
- (void)captureCoverWithCacheKey:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)pause;
- (void)start;
- (void)resetViews;
- (void)setupIfNeeded;
- (void)releaseSession;

@end
