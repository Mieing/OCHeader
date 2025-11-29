@class NSString, NSNumber, NSDictionary;

@interface AWEVoipJoinOperation : AWEVoipBaseOperation

@property (copy, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSNumber *cameraOff;
@property (retain, nonatomic) NSDictionary *trackContext;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *followUserID;

- (id)initWithRoomID:(id)a0 enterFrom:(long long)a1;
- (id)awe_internalOperation;
- (id)awe_bizType;
- (void).cxx_destruct;

@end
