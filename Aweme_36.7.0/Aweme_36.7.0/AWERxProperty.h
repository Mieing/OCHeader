@interface AWERxProperty : AWERxObservable

@property (retain, nonatomic) id data;

- (void)send:(id)a0 withContext:(id)a1;
- (void)setValue:(id)a0 withContext:(id)a1;
- (id)subscribeWithContext:(id /* block */)a0 syncImmediately:(BOOL)a1;
- (id)required:(id)a0;
- (void)bind:(id)a0 initValue:(id)a1;
- (id)subscribe:(id /* block */)a0 syncImmediately:(BOOL)a1;
- (id)rawValue;
- (void).cxx_destruct;
- (void)send:(id)a0;
- (void)setValue:(id)a0;
- (id)initWithValue:(id)a0;
- (id)distinctUntilChanged;

@end
