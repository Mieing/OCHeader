@class NSString;

@interface WCPayVerifyUserRealNameInfoResp : NSObject

@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) BOOL is_support_face;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) NSString *package_sign;
@property (nonatomic) BOOL is_need_cert;

- (void).cxx_destruct;

@end
