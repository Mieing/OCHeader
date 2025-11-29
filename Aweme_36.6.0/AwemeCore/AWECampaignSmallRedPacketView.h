@class LOTAnimationView, NSString, IESLiveVideoGiftController;

@interface AWECampaignSmallRedPacketView : UIView <IESLiveVideoGiftControllerDelegate>

@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) IESLiveVideoGiftController *alphaPlayer;
@property (copy, nonatomic) NSString *campaignID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
