@class NSString;

@interface BDPWebViewPromptProtector : NSObject {
    NSString *_prompt;
    NSString *_defaultText;
    id /* block */ _completion;
}

- (id)initWithPrompt:(id)a0 defaultText:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)callCompletionHandler:(id)a0;

@end
