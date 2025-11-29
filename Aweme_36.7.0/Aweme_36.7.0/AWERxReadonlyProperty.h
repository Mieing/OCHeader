@interface AWERxReadonlyProperty : AWERxProperty

@property (nonatomic) long long accessCode;

- (id)initWithValue:(id)a0 accessCode:(long long)a1;
- (void)setValue:(id)a0 accessCode:(long long)a1;
- (void)setValue:(id)a0 withContext:(id)a1 accessCode:(long long)a2;
- (void)bind:(id)a0 accessCode:(long long)a1;
- (void)bind:(id)a0 initValue:(id)a1 accessCode:(long long)a2;

@end
