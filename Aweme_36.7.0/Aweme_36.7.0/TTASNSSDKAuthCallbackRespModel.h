@class NSString, NSNumber, TTASNSSDKAuthCallbackModel;

@interface TTASNSSDKAuthCallbackRespModel : TTABaseRespModel

@property (copy, nonatomic) NSString *session_key;
@property (nonatomic) BOOL new_user;
@property (nonatomic) BOOL new_platform;
@property (retain, nonatomic) NSNumber *should_bind_mobile;
@property (retain, nonatomic) TTASNSSDKAuthCallbackModel *data;

- (BOOL)isBindConflict;
- (BOOL)isAuthPlatformConflict;
- (BOOL)isBindFailed;
- (void).cxx_destruct;

@end
