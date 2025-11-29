@interface TVLTraitObjectOption : TVLOption

+ (id)registeredTraitObjectOptions;

- (BOOL)shouldTakeEffectImmediately;
- (unsigned long long)type;

@end
