@class CJPayErrorButtonInfo, CJPayUserInfo, NSArray, CJPayCardSignInfoModel, CJPayQuickPayCardModel;
@protocol CJPayQuickPayUserAgreement;

@interface CJPayCardSignResponse : CJPayBaseResponse

@property (retain, nonatomic) CJPayUserInfo *userInfo;
@property (retain, nonatomic) CJPayQuickPayCardModel *card;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;
@property (copy, nonatomic) NSArray<CJPayQuickPayUserAgreement> *agreements;
@property (retain, nonatomic) CJPayCardSignInfoModel *cardSignInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)getQuickAgreements;
- (void).cxx_destruct;

@end
