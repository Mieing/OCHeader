@class NSString;

@interface CJPayLocalDigitalCertResultModel : NSObject

@property (nonatomic) unsigned long long resultType;
@property (copy, nonatomic) NSString *resultCode;
@property (copy, nonatomic) NSString *resultMsg;
@property (copy, nonatomic) NSString *csrData;
@property (copy, nonatomic) NSString *resultData;
@property (copy, nonatomic) NSString *q1id;
@property (copy, nonatomic) NSString *certDN;
@property (copy, nonatomic) NSString *certSN;

- (void).cxx_destruct;

@end
