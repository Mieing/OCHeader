@interface TVLOption : NSObject {
    id _identifier;
    id _value;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isAsync) BOOL async;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL shouldTakeEffectImmediately;
@property (readonly, nonatomic) long long key;
@property (readonly, nonatomic) id identifier;
@property (readonly, nonatomic) id value;

+ (unsigned long long)valueTypeForIdentifier:(id)a0;
+ (id)optionWithValue:(id)a0 identifier:(id)a1;
+ (unsigned long long)optionDomainForIdentifier:(id)a0;
+ (void)initialize;
+ (long long)keyForIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithValue:(id)a0 identifier:(id)a1;

@end
