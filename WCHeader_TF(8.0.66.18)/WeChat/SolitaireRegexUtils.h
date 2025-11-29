@class NSMutableDictionary, NSRecursiveLock;

@interface SolitaireRegexUtils : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSRecursiveLock *regexLock;
@property (retain, nonatomic) NSMutableDictionary *dicRegex;

+ (id)shareInstance;

- (id)init;
- (id)getRegexLock;
- (id)getRegularExpressionWithRegex:(id)a0;
- (BOOL)isMatchContent:(id)a0 Regex:(id)a1;
- (id)firstMatchContent:(id)a0 Regex:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeMatchContent:(id)a0 Regex:(id)a1;
- (id)replaceContent:(id)a0 OccurrencesOfRegex:(id)a1 withString:(id)a2;
- (void).cxx_destruct;

@end
