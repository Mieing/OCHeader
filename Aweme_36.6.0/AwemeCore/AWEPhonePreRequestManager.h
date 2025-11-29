@class NSString, NSDictionary, NSLock, AWEMaskPhoneModel;

@interface AWEPhonePreRequestManager : NSObject <AWEUserMessage>

@property (nonatomic) double lastSuccessPreRequestTime;
@property (nonatomic) double preRequestValidEriod;
@property (nonatomic) double retryTime;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL isRequestingToken;
@property (retain, nonatomic) NSLock *recordLock;
@property (retain, nonatomic) AWEMaskPhoneModel *maskPhone;
@property (copy, nonatomic) NSDictionary *carrierMaskToken;
@property (copy, nonatomic) NSDictionary *carrierValidateToken;
@property (copy, nonatomic) NSString *currentScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)startUpPreRequestWhenLaunch;
- (BOOL)hasAgreedPrivacyAlert;
- (void)recordMaskPhoneNumber:(id)a0 carrierType:(long long)a1;
- (void)clearCarrierToken;
- (void)startUpIfCanPreRequest;
- (BOOL)canPreRequestForScene:(id)a0;
- (void)startUpPreRequestWhenEnterForeground;
- (BOOL)useStoredMaskPhoneIfNeeded:(long long)a0;
- (void)preRequestWithScene:(id)a0 retryCount:(long long)a1;
- (void)preRequestCarrierMaskToken;
- (void)trackEventWithscene:(id)a0 number:(id)a1 carrier:(long long)a2 retryCount:(long long)a3 error:(id)a4;
- (void)preRequestCarrierMaskToken:(long long)a0;
- (void)preRequestCarrierValidateToken:(long long)a0;
- (id)maskPhoneModel;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
