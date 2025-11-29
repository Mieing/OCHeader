@class BaseRequest, NSString, NSData, NSMutableArray;

@interface QRConnectAuthorizeConfirmReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *oauthUrl;
@property (nonatomic) unsigned int opt;
@property (retain, nonatomic) NSMutableArray *scope;
@property (nonatomic) unsigned int avatarId;
@property (retain, nonatomic) NSData *gamecenterBuffer;
@property (nonatomic) BOOL isHaveGamecenterPage;

+ (void)initialize;

@end
