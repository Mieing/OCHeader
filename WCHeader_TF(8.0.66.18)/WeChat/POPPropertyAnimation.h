@class POPAnimatableProperty;

@interface POPPropertyAnimation : POPAnimation

@property (retain, nonatomic) POPAnimatableProperty *property;
@property (copy, nonatomic) id fromValue;
@property (copy, nonatomic) id toValue;
@property (nonatomic) double roundingFactor;
@property (nonatomic) unsigned long long clampMode;
@property (nonatomic, getter=isAdditive) BOOL additive;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_initState;
- (id)progressMarkers;
- (void)setProgressMarkers:(id)a0;
- (id)currentValue;
- (void)_appendDescription:(id)a0 debug:(BOOL)a1;

@end
