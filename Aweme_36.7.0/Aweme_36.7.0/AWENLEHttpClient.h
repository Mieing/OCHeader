@class NSString;

@interface AWENLEHttpClient : NSObject <NLEHttpClientDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (BOOL)request:(id)a0 item:(id)a1 pHttpClient:(void *)a2 callback:(id /* block */)a3;
- (void)dealloc;

@end
