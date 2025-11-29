@interface __RTVStateTransferEventKey : NSObject

@property (readonly, nonatomic) long long fromState;
@property (readonly, nonatomic) long long toState;

- (id)initWithFromState:(long long)a0 toState:(long long)a1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
