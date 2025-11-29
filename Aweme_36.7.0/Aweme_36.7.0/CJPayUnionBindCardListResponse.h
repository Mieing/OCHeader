@class NSArray, NSString, CJPayUnionCopywritingInfo;
@protocol CJPayUnionCardInfoModel;

@interface CJPayUnionBindCardListResponse : CJPayBaseResponse

@property (copy, nonatomic) NSArray<CJPayUnionCardInfoModel> *cardList;
@property (copy, nonatomic) NSString *hasBindableCard;
@property (retain, nonatomic) CJPayUnionCopywritingInfo *unionCopywritingInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
