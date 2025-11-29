@class NSString, NSDictionary;

@interface RTVVoipParticipatorLocalInfo : JSONModel

@property (copy, nonatomic) NSString *os;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *clientVersion;
@property (nonatomic) BOOL preJoinRoom;
@property (nonatomic) BOOL preOpenCamera;
@property (copy, nonatomic) NSDictionary *settings;
@property (copy, nonatomic) NSString *otherInfo;

+ (BOOL)propertyIsOptional:(id)a0;

- (id)initWithRoomSyncDataBasicInfo:(id)a0;
- (void).cxx_destruct;

@end
