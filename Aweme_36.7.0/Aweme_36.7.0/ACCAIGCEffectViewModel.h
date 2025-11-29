@class NSString, NSNumber;

@interface ACCAIGCEffectViewModel : NSObject <ACCAIGCEffectServiceProtocol>

@property (nonatomic) long long gobackSignal;
@property (nonatomic) BOOL loadingEffectSignal;
@property (nonatomic) BOOL closeEditPageSignal;
@property (nonatomic) BOOL isShowSpecialEffectPanelSignal;
@property (nonatomic) BOOL updateEditorBarItemSignal;
@property (nonatomic) BOOL needBindLiveViewModelSignal;
@property (copy, nonatomic) NSString *musicIdSignal;
@property (copy, nonatomic) NSNumber *effectChangeSignal;
@property (copy, nonatomic) NSNumber *loraDidGeneratedCanAutoApplySideSlipEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeEditPage:(BOOL)a0;
- (void)sendNeedToUpdateEditorBatItem:(BOOL)a0;
- (void)exitEditPageWhileLoading;
- (void)loadingEffectWithStatus:(BOOL)a0;
- (void)switchSlotchangeMusic:(id)a0;
- (void)isShowSpecialEffectPanel:(BOOL)a0;
- (void)sendNeedUpdateLiveModel;
- (void).cxx_destruct;

@end
