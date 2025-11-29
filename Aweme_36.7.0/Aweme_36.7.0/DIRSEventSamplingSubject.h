@class NSString;
@protocol IRISDataCoder;

@interface DIRSEventSamplingSubject : NSObject {
    NSString *appId;
    NSString *deviceId;
    NSString *userId;
}

@property (nonatomic) long long numbericDeviceId;
@property (nonatomic) long long crc32DeviceId;
@property (nonatomic) unsigned long long cityHashDevieceId;
@property (nonatomic) unsigned long long cityHashUserId;
@property (weak, nonatomic) id<IRISDataCoder> cityHashCoder;
@property (readonly, nonatomic) unsigned int randomId;

+ (id)subjectWithAppID:(id)a0;

- (void)_updateSubjectIDs;
- (void).cxx_destruct;
- (void)setUserID:(id)a0;
- (void)setDeviceID:(id)a0;

@end
