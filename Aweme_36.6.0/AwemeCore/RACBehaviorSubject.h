@interface RACBehaviorSubject : RACSubject

@property (retain, nonatomic) id currentValue;

+ (id)behaviorSubjectWithDefaultValue:(id)a0;

- (void)sendNext:(id)a0;
- (id)subscribe:(id)a0;
- (void).cxx_destruct;

@end
