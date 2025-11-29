@class CachalotNextOperationConfig, NSString;

@interface CachalotStructEditOperation : NSObject

@property (retain, nonatomic) CachalotNextOperationConfig *config;
@property (nonatomic) BOOL nextMode;
@property (copy, nonatomic) id /* block */ executionBlock;
@property (copy, nonatomic) id /* block */ revertBlock;
@property (readonly, nonatomic) BOOL canRevert;
@property (readonly, nonatomic) BOOL willAffectStruct;
@property (readonly, nonatomic) NSString *nlDescription;

- (void).cxx_destruct;
- (id)execute;
- (void)prepare;
- (id)initWithConfig:(id)a0;
- (id)revert;

@end
