@class HTSEventContext, IESLiveBannerApi, NSString;
@protocol IESLiveRoomService, HTSLiveTaskBannerReactions;

@interface HTSLiveTaskBannerStore : NSObject <HTSLiveMessageSubscriber, IESLiveBannerDispatcher>

@property (retain, nonatomic) IESLiveBannerApi *api;
@property (weak, nonatomic) id<HTSLiveTaskBannerReactions> reactions;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (readonly, nonatomic) unsigned long long bannerRole;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isInRoomBannerRequestFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithRoomModel:(id)a0 api:(id)a1;
- (void)addBannerDataObserver;
- (void)receiveBannerData:(id)a0 error:(id)a1;
- (void)refreshBannerData:(id)a0 error:(id)a1 position:(int)a2;
- (void)receiveBannerDataOrigin:(id)a0 error:(id)a1;
- (void)showTaskTopRight:(id)a0;
- (void)hideTaskTopRight;
- (void).cxx_destruct;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
