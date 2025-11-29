@class NSMutableArray;

@interface IESForestWorkflowTrace : NSObject

@property (retain, nonatomic) NSMutableArray *items;

- (void)appendStep:(id)a0 code:(long long)a1 message:(id)a2;
- (long long)finalErrorCode;
- (id)finalInfo;
- (void).cxx_destruct;
- (id)init;

@end
