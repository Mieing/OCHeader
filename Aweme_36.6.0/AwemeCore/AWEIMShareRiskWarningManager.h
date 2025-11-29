@interface AWEIMShareRiskWarningManager : NSObject

+ (void)transferToURLString:(id)a0;
+ (BOOL)shouldShowWithGid:(id)a0;
+ (id)riskWarningTextWithModel:(id)a0;
+ (id)riskWarningTextWithModel:(id)a0 fontSize:(double)a1;
+ (id)titleWithRiskWarningModel:(id)a0 fontSize:(double)a1;
+ (id)attrbutedStringWithTitle:(id)a0 color:(id)a1 highlightColor:(id)a2 font:(id)a3 needCenter:(BOOL)a4 riskWarningModel:(id)a5 awemeModel:(id)a6 lineSpacing:(double)a7;
+ (id)paramModelByText:(id)a0 forModel:(id)a1;
+ (BOOL)enable;

@end
