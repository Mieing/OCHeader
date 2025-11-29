@class NSNumber, IESLiveIMVenueMessageActionCreator;

@interface IESLiveHybridIMMessageHandler : NSObject

@property (copy, nonatomic) NSNumber *currentRoomID;
@property (retain, nonatomic) IESLiveIMVenueMessageActionCreator *messageCreator;

+ (id)sharedInstance;

- (BOOL)disconnectWithRoomID:(id)a0;
- (void)addSubscriber:(id)a0 forMessageNames:(id)a1;
- (BOOL)connectWithRoomID:(id)a0 scene:(id)a1 service:(id)a2 method:(id)a3 customParams:(id)a4;
- (void).cxx_destruct;

@end
