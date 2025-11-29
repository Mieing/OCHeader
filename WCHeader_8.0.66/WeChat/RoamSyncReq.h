@class BaseRequest, NSData, RoamVersion;

@interface RoamSyncReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baserequest;
@property (retain, nonatomic) RoamVersion *roamVersion;
@property (retain, nonatomic) NSData *context;

+ (void)initialize;

@end
