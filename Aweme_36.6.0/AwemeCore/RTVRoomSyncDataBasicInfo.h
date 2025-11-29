@class NSString, RTVVoipBizData;
@protocol Optional;

@interface RTVRoomSyncDataBasicInfo : JSONModel

@property (copy, nonatomic) NSString *versionCode;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString<Optional> *appID;
@property (copy, nonatomic) NSString *os;
@property (copy, nonatomic) NSString<Optional> *devicePlatform;
@property (retain, nonatomic) RTVVoipBizData<Optional> *bizData;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
