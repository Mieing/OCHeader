@class NSString;
@protocol AWEShowPlayerControllerProtocol, AWEShowMixPlayerViewDelegate;

@interface AWEShowMixPlayerView : UIView <AWEShowMixPlayerViewProtocol>

@property (nonatomic) long long viewType;
@property (retain, nonatomic) id<AWEShowPlayerControllerProtocol> playerController;
@property (weak, nonatomic) id<AWEShowMixPlayerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithAwemeModel:(id)a0;
- (void)setupSubView;
- (void)updateWithEpisode:(id)a0;
- (void)updateWithLiveModel:(id)a0;
- (BOOL)reusePlayerController:(long long)a0 model:(id)a1;
- (void)resetPlayerControllerIfNeed;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
