@class NSString, HTSLiveBridgeData, HTSEventContext;
@protocol IESLiveRoomService;

@interface HTSLivePopupWebViewModel : NSObject <HTSLiveMessageSubscriber>

@property (retain, nonatomic) NSString *pageSchemeURLStr;
@property (retain, nonatomic) HTSLiveBridgeData *jsonBridgeMessage;
@property (readonly, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSString *toastString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)handleBridgeMessage:(id)a0;
- (void)setupDI;
- (void)handleInstantMessage:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)initWithRoom:(id)a0;

@end
