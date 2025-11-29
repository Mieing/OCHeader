@class NSString, NSMutableArray;

@interface FinderLiveAgreementInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *agreementUpdateTitle;
@property (retain, nonatomic) NSString *agreementUpdateContent;
@property (retain, nonatomic) NSMutableArray *agreementItems;
@property (nonatomic) BOOL enableBackendAgreement;

+ (void)initialize;

@end
