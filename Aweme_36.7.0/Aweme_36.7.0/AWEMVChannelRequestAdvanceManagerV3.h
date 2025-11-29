@class NSString;

@interface AWEMVChannelRequestAdvanceManagerV3 : NSObject

@property (class, readonly, nonatomic) AWEMVChannelRequestAdvanceManagerV3 *shared;

@property (nonatomic) unsigned long long errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (readonly, nonatomic) BOOL didSendRequest;

- (void)onNetWorkSetupCompleteForJX;
- (void)updateErrorCode:(unsigned long long)a0 errorMsg:(id)a1;
- (void)storeFirstRequestParamsForJX:(id)a0;
- (void)_useStoredParamsToRequest;
- (void).cxx_destruct;
- (id)init;

@end
