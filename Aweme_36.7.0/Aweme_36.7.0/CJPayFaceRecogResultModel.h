@class NSString, CJPayGetTicketResponse, NSDictionary;

@interface CJPayFaceRecogResultModel : NSObject

@property (nonatomic) unsigned long long result;
@property (copy, nonatomic) NSString *faceDataStr;
@property (retain, nonatomic) CJPayGetTicketResponse *getTicketResponse;
@property (copy, nonatomic) NSDictionary *voucherSwell;
@property (copy, nonatomic) NSDictionary *certSdkData;
@property (copy, nonatomic) NSDictionary *verifyResponse;
@property (copy, nonatomic) NSString *failReason;
@property (copy, nonatomic) NSDictionary *extData;

- (void).cxx_destruct;

@end
