@class NSString;

@interface TTAccountVerifyPassportErrorHandler : NSObject <TTAccountPassportErrorHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportFlows;
+ (BOOL)handlePassportError:(id)a0 request:(id)a1 response:(id)a2 jsonObj:(id)a3 completion:(id /* block */)a4;
+ (void)addPassportErrorHandler;


@end
