@interface LSListCellVMAction : NSObject <LSListCellVMActionProtocol>

@property (nonatomic) long long type;
@property (retain, nonatomic) id param;

+ (id)actionWithType:(long long)a0 param:(id)a1;

- (id)initWithType:(long long)a0 param:(id)a1;
- (void).cxx_destruct;

@end
