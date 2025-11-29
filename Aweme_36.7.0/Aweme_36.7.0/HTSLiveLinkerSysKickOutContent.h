@class NSString;

@interface HTSLiveLinkerSysKickOutContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *linkmicIdStr;
@property (copy, nonatomic) NSString *toastMsg;
@property (nonatomic) int kickOutSource;
@property (copy, nonatomic) NSString *reasonToast;

+ (id)descriptor;

@end
