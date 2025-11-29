@class BaseRequest, NSString;

@interface ReportUserPlateInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *plateNumber;
@property (retain, nonatomic) NSString *srcAppid;
@property (nonatomic) BOOL privacyProtectInfoChecked;

+ (void)initialize;

@end
