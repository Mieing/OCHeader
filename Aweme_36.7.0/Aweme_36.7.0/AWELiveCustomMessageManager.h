@class NSNumber, NSString, IESLiveIMVenueMessageActionCreator;

@interface AWELiveCustomMessageManager : NSObject <AWELiveCustomMessageService>

@property (retain, nonatomic) IESLiveIMVenueMessageActionCreator *messageCreator;
@property (retain, nonatomic) NSNumber *currentRoomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)connectWithRoomID:(id)a0 scene:(id)a1 customParams:(id)a2;
- (BOOL)connectWithRoomID:(id)a0 service:(id)a1 method:(id)a2 customParams:(id)a3;
- (BOOL)disconnectWithRoomID:(id)a0;
- (void)addSubscriber:(id)a0 forMessageNames:(id)a1;
- (id)toJSONFromMessage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
