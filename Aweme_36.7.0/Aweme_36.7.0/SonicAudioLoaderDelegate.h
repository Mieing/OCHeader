@class NSString;

@interface SonicAudioLoaderDelegate : NSObject <SonicAudioLoaderDelegate> {
    struct HttpResponseHandler { void /* function */ **x0; } *handler_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHandler:(struct HttpResponseHandler { void /* function */ **x0; } *)a0;
- (BOOL)isValid;
- (void)didReceiveResponse:(int)a0;
- (void)didReceiveData:(id)a0;
- (void)didCompleteWithError:(id)a0;

@end
