@interface AWEKnowledgeRichContentImpl.PFMUserDefaultsPromptStorage : NSObject <AWEKnowledgeRichContentImpl.PFMPromptStorage> {
    void /* unknown type, empty encoding */ kvStorage;
}

- (id)objectStringForKey:(id)a0;
- (void)setObjectString:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setDate:(id)a0 forKey:(id)a1;
- (id)init;
- (long long)integerForKey:(id)a0;
- (id)initWithSuiteName:(id)a0;
- (id)dateForKey:(id)a0;
- (void)removeValueForKey:(id)a0;

@end
