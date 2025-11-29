@class NSString;

@interface ProcessorHttpClient : NSObject <ProcessorHttpClientProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)requestWithURL:(id)a0 httpMethod:(long long)a1 httpBody:(id)a2 httpHeader:(id)a3 callback:(id /* block */)a4;

@end
