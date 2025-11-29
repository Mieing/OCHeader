@interface AWEKnowledgeRichContentImpl.PFMTaggedPromptLogger : NSObject <AWEKnowledgeRichContentImpl.PFMPromptLogger> {
    void /* unknown type, empty encoding */ base;
    void /* unknown type, empty encoding */ tag;
    void /* unknown type, empty encoding */ instance;
}

@property (nonatomic) long long minLevel;

- (void)log:(long long)a0 message:(id)a1 file:(id)a2 function:(id)a3 line:(long long)a4;
- (id)initWithBase:(id)a0 tag:(id)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
