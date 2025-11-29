@class UIImageView, NSString, UIView;
@protocol IESECShopLivePlayerDelegate, IESECUILoadingViewProtocol, IESLivePlayerProtocol;

@interface IESECShopLivePlayer : UIView <IESLivePlayerControllerDelegate, IESECShopLivePlayer>

@property (retain, nonatomic) id<IESLivePlayerProtocol> livePlayer;
@property (retain, nonatomic) UIImageView *liveCoverImageView;
@property (retain, nonatomic) UIView<IESECUILoadingViewProtocol> *liveLoadingView;
@property (nonatomic) unsigned long long playerLoadState;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *currentStreamData;
@property (weak, nonatomic) id<IESECShopLivePlayerDelegate> delegate;

+ (BOOL)livePlayerMute;

- (void)p_showLoading;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (void)p_hideLoading;
- (id)defaultResolutionType;
- (void)updateWithStreamData:(id)a0;
- (void)updateWithStreamData:(id)a0 placeholderURLArray:(id)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)stop;
- (void)dealloc;
- (void)setupViews;

@end
