@class NSString;
@protocol AWEEntertainmentVideoTrialDelegate;

@interface AWEPlayInteractionEntertainmentIAPMaskPresenter : AWEPlayInteractionEntertainmentBaseMaskPresenter <AWEPlayInteractionEntertainmentMaskPresenterProtocol>

@property (weak, nonatomic) id<AWEEntertainmentVideoTrialDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createAnnieXCardConfig;
- (id)getPreviewConfig;
- (id)getRecType:(id)a0;
- (id)getSchemaParams;
- (BOOL)disableVideoRepeat;
- (BOOL)shouldUsePreviewMask;
- (BOOL)shouldHiddenEffectMaskContainer;
- (BOOL)shouldShowMaskInTrial;
- (id)dataInjSceneID;
- (id)dataInjBusinessID;
- (id)buySchemaParameters;
- (BOOL)hasPlayletButtonInfo;
- (id)getCacheData;
- (id)cardIdentifier;
- (BOOL)shouldPreload;

@end
