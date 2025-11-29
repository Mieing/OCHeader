@class NSString, MMListenJumpAppInfo;

@interface MMListenDiscoverResponse_JumpableTopToast : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *jumpWording;
@property (retain, nonatomic) MMListenJumpAppInfo *jumpInfo;
@property (nonatomic) int type;
@property (nonatomic) unsigned long long adExpireTimeS;
@property (retain, nonatomic) NSString *leftWording;

+ (void)initialize;

@end
