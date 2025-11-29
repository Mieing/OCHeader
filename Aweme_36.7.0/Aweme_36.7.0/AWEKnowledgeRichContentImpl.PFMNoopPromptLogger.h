@interface AWEKnowledgeRichContentImpl.PFMNoopPromptLogger : NSObject <AWEKnowledgeRichContentImpl.PFMPromptLogger>

@property (nonatomic) long long minLevel;

- (void)log:(long long)a0 message:(id)a1 file:(id)a2 function:(id)a3 line:(long long)a4;
- (id)init;

@end
