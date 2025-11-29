@class NSString, CJPayErrorButtonInfo;

@interface CJPayCashdeskEnableBioPayResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *tokenFileStr;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
