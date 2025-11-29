@class IESLiveGameOpenPlatformAudienceRevenueService, NSString, IESLiveGameOpenPlatformAnchorRevenueService, IESLiveGameOpenPlatformPaymentManager;
@protocol IESLiveRoomService;

@interface IESLiveGameOpenPlatformRevenueService : NSObject <IESLiveGameOpenPlatformRevenueServiceInterface>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveGameOpenPlatformAnchorRevenueService *anchorRevenueService;
@property (retain, nonatomic) IESLiveGameOpenPlatformAudienceRevenueService *audienceRevenueService;
@property (retain, nonatomic) IESLiveGameOpenPlatformPaymentManager *paymentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)anchorRevenueServiceInterface;
- (id)audienceRevenueServiceInterface;
- (id)paymentInterface;
- (id)initWithRoom:(id)a0 DIContext:(id)a1;
- (void).cxx_destruct;

@end
