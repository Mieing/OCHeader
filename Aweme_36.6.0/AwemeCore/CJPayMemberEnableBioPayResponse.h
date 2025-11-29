@class NSString, CJPayErrorButtonInfo;

@interface CJPayMemberEnableBioPayResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *tokenFileStr;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
