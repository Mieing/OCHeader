@class NSArray, NSString, CJPayErrorButtonInfo;
@protocol CJPayUnionCardInfoModel;

@interface CJPayBindUnionPayBankCardResponse : CJPayBaseResponse

@property (copy, nonatomic) NSArray<CJPayUnionCardInfoModel> *bindCardIdList;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;
@property (copy, nonatomic) NSString *isSetPwd;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
