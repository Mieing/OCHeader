@class NSString, NSMutableDictionary;

@interface AWEPineappleLuckyIMService : NSObject <HTSLiveMessageSubscriber, BDUGHostIMProtocol>

@property (retain, nonatomic) NSMutableDictionary *linksMap;
@property (retain, nonatomic) NSMutableDictionary *linksMap2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

- (BOOL)connectWithRoomID:(id)a0 identifier:(id)a1;
- (BOOL)disconnectWithRoomID:(id)a0 identifier:(id)a1;
- (void)disconnectWithIdentifier:(id)a0;
- (void)connect:(id)a0 identifier:(id)a1;
- (void)notifyMessageReceived:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;

@end
