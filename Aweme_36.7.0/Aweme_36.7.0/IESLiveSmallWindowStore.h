@class IESLiveSmallWindowAPI, NSDictionary, NSNumber, HTSLiveRoom;

@interface IESLiveSmallWindowStore : NSObject

@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) HTSLiveRoom *roomModel;
@property (retain, nonatomic) IESLiveSmallWindowAPI *smallWindowApi;
@property (copy, nonatomic) id /* block */ liveEndAction;
@property (copy, nonatomic) NSDictionary *context;

- (id)initWithRoomID:(id)a0;
- (id)liveType;
- (void)trackLiveShow;
- (void)fetchRoomInfoWithRoomID:(id)a0 finished:(id /* block */)a1;
- (void)enterRoomWithPlayer:(id)a0 from:(id)a1 isInteract:(BOOL)a2;
- (void)smallWindowTrackWithEvent:(id)a0 extraParam:(id)a1 fromPage:(id)a2;
- (void)dealWithPlayerLoadState:(unsigned long long)a0;
- (void)onReceiveStreamDryUp;
- (void)updateBtmToken:(id)a0;
- (void)checkLiveState;
- (id)smallWindowEcomContextFrom:(id)a0;
- (void)smallWindowTrackWithEvent:(id)a0 params:(id)a1;
- (id)smallWindowTrackParams;
- (void).cxx_destruct;

@end
