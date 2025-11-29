@class NSDictionary, SECURLTrie, NSString;

@interface SECNetOptProtector : NSObject <SECNetProtector>

@property (copy, nonatomic) NSDictionary *fixedMap;
@property (copy, nonatomic) NSDictionary *wildcardMap;
@property (retain, nonatomic) SECURLTrie *URLTrie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resultForRulerParams:(id)a0 withStrategy:(id)a1;

- (void)setupConfig:(id)a0;
- (id)protect:(id)a0;
- (id)protect:(id)a0 withEvent:(id)a1;
- (BOOL)shouldHandle:(id)a0;
- (void).cxx_destruct;

@end
