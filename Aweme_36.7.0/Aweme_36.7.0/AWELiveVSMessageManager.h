@class NSString, NSHashTable, NSNumber, AWELiveVSMessageActionCreator;

@interface AWELiveVSMessageManager : NSObject <IESLiveSearchPreStreamMessageProvider, AWELiveVSMessageService>

@property (retain, nonatomic) NSHashTable *subscribersForAll;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) AWELiveVSMessageActionCreator *messageActionCreator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)uninstallMessageChannel;
- (void)installVSMessageWithRoomID:(id)a0 channelType:(unsigned long long)a1;
- (void)addVSProgrammeMessageubscrber:(id)a0;
- (void)removeVSProgrammeMessageSubscrber:(id)a0;
- (void)enumerate:(id)a0 sendMessage:(id)a1 withDict:(id)a2;
- (void)stopAndResetMessage;
- (void)startMessageIfNeed:(unsigned long long)a0;
- (void)loadNewMessageActionCreator:(unsigned long long)a0;
- (void)installVSMessageWithRoomID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dispatchMessage:(id)a0;
- (void)messageReceived:(id)a0;

@end
