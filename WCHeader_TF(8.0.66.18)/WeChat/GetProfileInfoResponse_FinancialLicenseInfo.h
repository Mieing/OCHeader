@class NSString, NSMutableArray;

@interface GetProfileInfoResponse_FinancialLicenseInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *subItemList;
@property (nonatomic) unsigned int enableFlag;

+ (void)initialize;

@end
