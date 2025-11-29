@class NSMutableSet;

@interface IESECSliceXExpressionErrorManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

@property (retain, nonatomic) NSMutableSet *compilationErrors;
@property (retain, nonatomic) NSMutableSet *executionErrors;

+ (id)shared;

- (void)reportExecutionError:(id)a0 expression:(id)a1 context:(id)a2;
- (void)reportCompilationErrorWithExpression:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
