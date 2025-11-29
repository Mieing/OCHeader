@class NSString, NSDictionary;

@interface IESECLiveEnterRoomExtraRequest : IESECLiveAPIBaseRequest

@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *relatedInfo;
@property (copy, nonatomic) NSString *entranceInfo;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) NSString *outOfTimeKeysInfo;
@property (nonatomic) BOOL IsLinkMic;
@property (nonatomic) BOOL isEcomRoom;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *addressInfo;

- (id)buildParams;
- (void).cxx_destruct;

@end
