@class NSString;

@interface AWELivePreStreamEnterRoomExtendAreaDataProvider : NSObject <AWELivePreStreamEnterRoomDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)provideEenterLiveRoomParamasWithContext:(id)a0;
- (id)p_generateClickParamasWithContext:(id)a0;
- (id)p_generateExtraParamasWithContext:(id)a0;
- (id)p_generateContextParamasWithContext:(id)a0;
- (id)p_generateBusinessParamasWithContext:(id)a0;
- (id)p_generateLifeBusinessParamsWithContext:(id)a0;
- (id)p_generateExtendAreaInfo:(id)a0;

@end
