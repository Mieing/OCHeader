@class NSString, IESLiveIntimateChatHostApplyItemView;

@interface IESLiveBigPartyMSequenceAudienceHostEntranceController : NSObject <IESLiveInteractAction>

@property (copy, nonatomic) id /* block */ audienceEntranceShowHandler;
@property (copy, nonatomic) id /* block */ audienceEntranceHideHandler;
@property (retain, nonatomic) IESLiveIntimateChatHostApplyItemView *hostEntrance;
@property (readonly, nonatomic) unsigned long long currentSocialScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)startInteractiveWithScene:(unsigned long long)a0;
- (void)registerBigPartyAudienceEntranceHideHandler:(id /* block */)a0;
- (void)registerBigPartyAudienceEntranceShowHandler:(id /* block */)a0;
- (void)addHostEntrance;
- (void)removeHostEntrance;
- (void).cxx_destruct;

@end
