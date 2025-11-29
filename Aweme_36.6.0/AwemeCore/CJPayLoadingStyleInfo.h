@class NSString, CJPayLoadingShowInfo;

@interface CJPayLoadingStyleInfo : JSONModel

@property (copy, nonatomic) NSString *loadingStyle;
@property (retain, nonatomic) CJPayLoadingShowInfo *preShowInfo;
@property (retain, nonatomic) CJPayLoadingShowInfo *payingShowInfo;
@property (retain, nonatomic) CJPayLoadingShowInfo *bindCardConfirmPreShowInfo;
@property (retain, nonatomic) CJPayLoadingShowInfo *bindCardCompleteShowInfo;
@property (retain, nonatomic) CJPayLoadingShowInfo *bindCardConfirmPayingShowInfo;
@property (copy, nonatomic) NSString *showPayResult;
@property (retain, nonatomic) CJPayLoadingShowInfo *nopwdCombinePreShowInfo;
@property (retain, nonatomic) CJPayLoadingShowInfo *nopwdCombinePayingShowInfo;
@property (retain, nonatomic) CJPayLoadingShowInfo *payVerifyPreShowInfo;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL isNeedShowPayResult;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (BOOL)isNeedShowBindCardTripleTitle;
- (BOOL)isHitLoadingOpt;
- (void).cxx_destruct;

@end
