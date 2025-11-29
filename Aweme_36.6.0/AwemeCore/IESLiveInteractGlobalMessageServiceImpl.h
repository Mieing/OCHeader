@class NSString, NSMutableDictionary;

@interface IESLiveInteractGlobalMessageServiceImpl : NSObject <IESLiveIMMessageSubscriber, IESLiveInteractGlobalMessageService>

@property (retain, nonatomic) NSMutableDictionary *roomIDToSyncDataDic;
@property (retain, nonatomic) NSMutableDictionary *roomIDToBgDataDic;
@property (retain, nonatomic) NSMutableDictionary *roomIDToSubscribesDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)didSetAttachingDIContext;
- (void)addSubscriber:(id)a0 roomID:(id)a1;
- (void)removeSubscriber:(id)a0 roomID:(id)a1;
- (id)getSyncDataWithRoomID:(id)a0;
- (id)getBgImgMessageWithRoomID:(id)a0;
- (void)dispatchMessage:(id)a0 roomID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
