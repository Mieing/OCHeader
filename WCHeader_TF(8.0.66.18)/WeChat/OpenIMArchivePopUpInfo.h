@class NSString;

@interface OpenIMArchivePopUpInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *heading;
@property (retain, nonatomic) NSString *desp;
@property (retain, nonatomic) NSString *approveButtonWording;
@property (retain, nonatomic) NSString *rejectButtonWording;
@property (retain, nonatomic) NSString *privacyAgreementWording;
@property (retain, nonatomic) NSString *privacyAgreementUrl;
@property (nonatomic) BOOL isForceArchived;

+ (void)initialize;

@end
