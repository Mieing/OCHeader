@class NSString;

@interface IESECSliceXExprCoreOperator : NSObject

@property (readonly, nonatomic) NSString *symbol;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) unsigned long long type;

- (id)execute:(id)a0 error:(id *)a1;

@end
