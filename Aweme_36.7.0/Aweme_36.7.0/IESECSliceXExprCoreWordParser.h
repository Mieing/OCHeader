@class IESECSliceXExprCoreOperatorManager, NSDictionary, NSCharacterSet, IESECSliceXExprCoreFuncManager;

@interface IESECSliceXExprCoreWordParser : NSObject

@property (retain, nonatomic) IESECSliceXExprCoreFuncManager *funcManager;
@property (retain, nonatomic) IESECSliceXExprCoreOperatorManager *operatorManager;
@property (readonly, nonatomic) NSCharacterSet *normalTokenChar;
@property (readonly, nonatomic) NSDictionary *constValueMap;

+ (void)initialize;

- (id)initWithFuncManager:(id)a0 operatorManager:(id)a1;
- (id)parseExprStringToken:(id)a0 start:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 stringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 error:(id *)a3;
- (id)parseExprNumberToken:(id)a0 start:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 numRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)parseNormalToken:(id)a0 start:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (void).cxx_destruct;
- (id)parse:(id)a0 error:(id *)a1;

@end
