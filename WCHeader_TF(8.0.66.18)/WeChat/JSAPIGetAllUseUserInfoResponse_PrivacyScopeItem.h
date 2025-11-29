@class NSString;

@interface JSAPIGetAllUseUserInfoResponse_PrivacyScopeItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *darkModeIconUrl;

+ (void)initialize;

@end
