@class NSString, StoreEmotionRecoverMyPanelListCgi;
@protocol StoreEmotionRecoverLogicObjectDelegate;

@interface StoreEmotionRecoverLogicObject : MMObject <StoreEmotionRecoverMyPanelListCgiDelegate>

@property (retain, nonatomic) StoreEmotionRecoverMyPanelListCgi *downloadCgi;
@property (weak, nonatomic) id<StoreEmotionRecoverLogicObjectDelegate> delegate;
@property (nonatomic) BOOL m_isActive;
@property (nonatomic) BOOL m_hasStartLogic;
@property (nonatomic) int scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)startRequest;
- (BOOL)isActive;
- (void)startInternalRequest;
- (BOOL)canStartCgiNow;
- (void)onStoreEmotionRecoverMyPanelListCgiOKWithPids:(id)a0;
- (void)onStoreEmotionRecoverMyPanelListCgiFailed;
- (void)onStoreEmotionRecoverMyPanelListOKWithSetInfos:(id)a0;
- (void).cxx_destruct;

@end
