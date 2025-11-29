@class TTACustomWapAuthCallbackModel;

@interface TTACustomWapAuthCallbackRespModel : TTABaseRespModel

@property (retain, nonatomic) TTACustomWapAuthCallbackModel *data;

- (BOOL)isBindConflict;
- (BOOL)isAuthPlatformConflict;
- (BOOL)isBindFailed;
- (BOOL)isAccounntBanned;
- (BOOL)isAccounntLimited;
- (BOOL)isDeviceBanned;
- (id)initWithWapAuthCallbackURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCanceling;

@end
