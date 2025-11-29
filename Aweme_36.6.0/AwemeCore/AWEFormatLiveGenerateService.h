@interface AWEFormatLiveGenerateService : HTSService <DUXLoadingToastDelegate, AWEFormatLiveGenerateServiceInterface> {
    void /* unknown type, empty encoding */ isGenerating;
    void /* unknown type, empty encoding */ isCancelled;
}

- (void)DUXLoadingToastDidClosed:(id)a0;
- (void)generateTopicWithConfig:(id)a0 completion:(id /* block */)a1;
- (void)generateScriptWithConfig:(id)a0 completion:(id /* block */)a1;
- (id)init;

@end
