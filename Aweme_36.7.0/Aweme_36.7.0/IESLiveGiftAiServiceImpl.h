@class NSString;
@protocol IESLiveRoomService;

@interface IESLiveGiftAiServiceImpl : NSObject <IESLiveTextClassifyDelegate, IESLiveGiftAiService>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) long long seiResultTimeLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerMessageHandler:(id)a0 callback:(id /* block */)a1;
- (void)removeMessageHandler:(id)a0;
- (void)registerGiftList:(id)a0;
- (void)pushTextClassifyResult:(id)a0;
- (void)runTask:(id)a0 params:(id)a1;
- (void)runTask:(id)a0 params:(id)a1 taskCallback:(id /* block */)a2;
- (void)registerTextClassifyDelegateWithRoom:(id)a0;
- (void)unregisterTextClassifyDelegateWithRoom:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
