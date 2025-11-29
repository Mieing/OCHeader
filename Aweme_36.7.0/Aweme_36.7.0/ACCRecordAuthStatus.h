@class NSString;

@interface ACCRecordAuthStatus : NSObject

@property (nonatomic) unsigned long long requiredPermission;
@property (nonatomic) BOOL hasSendAuthSignal;
@property (readonly, nonatomic) BOOL passAuth;
@property (readonly, nonatomic) BOOL needVERecorder;
@property (readonly, nonatomic) BOOL needCameraAuth;
@property (readonly, nonatomic) BOOL needMicPhoneAuth;
@property (readonly, nonatomic) BOOL readyForVERecorder;
@property (readonly, nonatomic) BOOL readyForCameraRecord;
@property (readonly, nonatomic) BOOL hasConfirmedAuth;
@property (copy, nonatomic) NSString *trackIdentifier;

- (void).cxx_destruct;

@end
