@class NSString, RxMultipleDelegate, UIView;
@protocol AWEMusicBottomPlayerStatusProtocol, AWEMusicStreamingBottomPlayer;

@interface AWEMusicBottomPlayerService : HTSService <AWEMusicBottomPlayerService>

@property (retain, nonatomic) RxMultipleDelegate<AWEMusicBottomPlayerStatusProtocol> *multipleDelegate;
@property (weak, nonatomic) UIView<AWEMusicStreamingBottomPlayer> *showingBottomPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)hook;
+ (id)bottomPlayerWithoutAutoCreate:(id)a0;
+ (id)bottomPlayerWith:(id)a0;
+ (BOOL)isBottomPlayerShowing;
+ (double)safeBottomHeight;
+ (void)addObserver:(id)a0;
+ (id)shared;
+ (void)removeObserver:(id)a0;
+ (double)viewHeight;

- (void)bottomPlayerWillShow:(id)a0;
- (void)bottomPlayerWillDismiss:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;

@end
