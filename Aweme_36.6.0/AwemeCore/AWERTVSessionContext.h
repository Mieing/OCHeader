@class NSNumber, NSArray, NSString;

@interface AWERTVSessionContext : NSObject <AWERTVSessionContextInterface>

@property (readonly, nonatomic) long long rtvType;
@property (readonly, nonatomic) long long rtvCallType;
@property (readonly, nonatomic) long long rtvEnterFrom;
@property (readonly, nonatomic) NSNumber *capacity;
@property (readonly, copy, nonatomic) NSArray *inRTVUserIMIDs;
@property (readonly, nonatomic) BOOL rtvIsConnected;
@property (readonly, nonatomic) BOOL isFeedSharing;
@property (readonly, nonatomic) BOOL isInGaming;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initSessionContextWithObserveRoomInfo:(id)a0;
- (id)initSessionContextWithVoipModel:(id)a0;
- (id)__inRtvUserIMIDsWithVoip:(id)a0;
- (id)__inRtvUserIMIDsWithObserveRoomInfo:(id)a0;
- (long long)voipEnterFrom;
- (id)roomCapacity;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (long long)type;
- (long long)callType;
- (id)userIDs;

@end
