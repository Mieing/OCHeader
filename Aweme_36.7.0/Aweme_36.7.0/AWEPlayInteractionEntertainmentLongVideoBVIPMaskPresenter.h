@class NSString;
@protocol AWEEntertainmentVideoTrialDelegate;

@interface AWEPlayInteractionEntertainmentLongVideoBVIPMaskPresenter : AWEPlayInteractionEntertainmentBaseMaskPresenter <AWEPlayInteractionEntertainmentMaskPresenterProtocol>

@property (weak, nonatomic) id<AWEEntertainmentVideoTrialDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createAnnieXCardConfig;
- (id)getSchemaParams;
- (BOOL)shouldShowMaskInTrial;
- (BOOL)shouldHideMaskWhenReplayTrial;
- (id)dataInjSceneID;
- (id)dataInjBusinessID;
- (id)containerID;
- (id)getCacheData;

@end
