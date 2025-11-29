@class NSMutableDictionary;

@interface IESECSliceXExprCoreFuncManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *functions;

+ (void)initialize;

- (void)registerFunc:(id)a0;
- (id)getFuncFromSymbol:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
