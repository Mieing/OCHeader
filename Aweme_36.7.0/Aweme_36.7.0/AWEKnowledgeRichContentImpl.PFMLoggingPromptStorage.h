@interface AWEKnowledgeRichContentImpl.PFMLoggingPromptStorage : NSObject <AWEKnowledgeRichContentImpl.PFMPromptStorage> {
    void /* unknown type, empty encoding */ base;
    void /* unknown type, empty encoding */ logger;
}

- (id)objectStringForKey:(id)a0;
- (void)setObjectString:(id)a0 forKey:(id)a1;
- (id)initWithBase:(id)a0 logger:(id)a1;
- (void).cxx_destruct;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setDate:(id)a0 forKey:(id)a1;
- (id)init;
- (long long)integerForKey:(id)a0;
- (id)dateForKey:(id)a0;
- (void)removeValueForKey:(id)a0;

@end
