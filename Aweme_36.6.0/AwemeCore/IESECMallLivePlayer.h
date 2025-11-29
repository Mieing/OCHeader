@class NSString, IESECLivePlayer;
@protocol IESECShopLivePlayerDelegate;

@interface IESECMallLivePlayer : UIView <IESECShopLivePlayerDelegate, IESECLivePlayerViewDelegate>

@property (retain, nonatomic) IESECLivePlayer *livePlayerView;
@property (weak, nonatomic) id<IESECShopLivePlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
