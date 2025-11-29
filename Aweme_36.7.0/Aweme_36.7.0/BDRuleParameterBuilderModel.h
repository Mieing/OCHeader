@class NSString;

@interface BDRuleParameterBuilderModel : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) unsigned long long origin;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ builder;
@property (retain, nonatomic) id value;

- (void).cxx_destruct;
- (id)init;

@end
