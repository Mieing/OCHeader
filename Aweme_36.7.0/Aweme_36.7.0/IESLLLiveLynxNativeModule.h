@class NSString, NSDictionary;

@interface IESLLLiveLynxNativeModule : NSObject <LynxModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)getBTMPageInfo:(id)a0;
- (id)openSchema:(id)a0;
- (id)getLiveStrategyData:(id)a0;
- (id)getValidBTMResponder:(id)a0;
- (void)asyncMethodName:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (id)syncMethodName:(id)a0 params:(id)a1;
- (void)sendPoiLog:(id)a0 liveLifeContainerID:(id)a1 callback:(id /* block */)a2;
- (void)request:(id)a0 liveLifeContainerID:(id)a1 callback:(id /* block */)a2;
- (void)saveGenericKV:(id)a0 callback:(id /* block */)a1;
- (void)publishEvent:(id)a0 callback:(id /* block */)a1;
- (void)checkLoginStatus:(id)a0 callback:(id /* block */)a1;
- (void)getBTMPageInfo:(id)a0 callback:(id /* block */)a1;
- (void)getBcmChain:(id)a0 data:(id)a1 callback:(id /* block */)a2;
- (void)setBcmPage:(id)a0 data:(id)a1 callback:(id /* block */)a2;
- (void)createJumpSourceBtmToken:(id)a0 data:(id)a1 callback:(id /* block */)a2;
- (void)registerBtmPage:(id)a0 data:(id)a1 callback:(id /* block */)a2;
- (id)storePOISession:(id)a0;
- (id)readPOISession:(id)a0;
- (id)cleanPOISession:(id)a0;
- (id)getTextWidth:(id)a0;
- (id)splitTextByWidth:(id)a0;
- (id)getGenericKV:(id)a0;
- (id)getABTestParams:(id)a0;
- (id)saveToStorage:(id)a0;
- (id)getBcmChain:(id)a0 data:(id)a1;
- (id)createJumpSourceBtmToken:(id)a0 data:(id)a1;
- (id)setBcmPage:(id)a0 data:(id)a1;
- (id)registerBtmPage:(id)a0 data:(id)a1;
- (id)showLocalToast:(id)a0;
- (id)openLiveLifePopup:(id)a0;
- (id)openLiveLifeGrouponPage:(id)a0;
- (id)getLiveRoomInfo:(id)a0;
- (void)sendPoiBTMLog:(id)a0 liveLifeContainerID:(id)a1;
- (id)generateBTMInfo:(id)a0 liveLifeContainerID:(id)a1;
- (unsigned long long)getBTMEventType:(unsigned long long)a0;
- (double)transformpxFromdp:(double)a0 isNeedTrans:(long long)a1;
- (id)responderWithLiveLifeContainerID:(id)a0;
- (id)showToast:(id)a0;

@end
