@class NSString, NSMutableArray, BaseResponse;

@interface VerifyBeaconJSPermissionResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSMutableArray *uuids;

+ (void)initialize;

@end
