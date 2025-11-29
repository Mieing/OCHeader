@interface CKScorageKeypath : NSObject

@property (retain, nonatomic) Class scope;
@property (retain, nonatomic) Class bizModel;
@property (weak, nonatomic) id bindTo;
@property (nonatomic) unsigned long long hashValue;

- (id)initWithScope:(Class)a0 bizModel:(Class)a1 bindTo:(id)a2;
- (id)initWithScope:(Class)a0 bizModel:(Class)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
