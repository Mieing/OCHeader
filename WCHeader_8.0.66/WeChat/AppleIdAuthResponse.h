@class BuiltinIPList, NSString, HostList, NetworkControl, BaseResponse;

@interface AppleIdAuthResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *authpwd;
@property (retain, nonatomic) HostList *newHostList;
@property (retain, nonatomic) NetworkControl *networkControl;
@property (retain, nonatomic) BuiltinIPList *builtinIplist;
@property (nonatomic) unsigned int certRegion;
@property (nonatomic) unsigned int mmtlsControlBitFlag;

+ (void)initialize;

@end
