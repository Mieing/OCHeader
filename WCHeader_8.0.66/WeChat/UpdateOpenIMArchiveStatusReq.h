@class NSString;

@interface UpdateOpenIMArchiveStatusReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *tousername;
@property (retain, nonatomic) NSString *privacyAgreementUrl;

+ (void)initialize;

@end
