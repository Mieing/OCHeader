@class CJPayErrorButtonInfo, NSString, NSArray, NSDictionary, CJPayMemberFaceVerifyInfoModel;
@protocol CJPayMemAgreementModel;

@interface CJPaySendSMSResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *smsToken;
@property (copy, nonatomic) NSString *mobileMask;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;
@property (copy, nonatomic) NSArray<CJPayMemAgreementModel> *agreements;
@property (copy, nonatomic) NSDictionary *protocolGroupNames;
@property (copy, nonatomic) NSString *verifyTextMsg;
@property (retain, nonatomic) CJPayMemberFaceVerifyInfoModel *faceVerifyInfo;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
