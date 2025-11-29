@class NSString;

@interface AWEUserErrorCodeProcessImpl : NSObject <TTAccountPassportErrorHandler, AWEPassportErrorHandlerImplProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportFlows;
+ (BOOL)handlePassportErrorWithContext:(id)a0;

- (void)process1049Error:(id)a0 fullData:(id)a1 completion:(id /* block */)a2;
- (void)process1104Error:(id)a0 fullData:(id)a1 completion:(id /* block */)a2;
- (void)process1105Error:(id)a0 fullData:(id)a1 completion:(id /* block */)a2;
- (void)process1108Error:(id)a0 fullData:(id)a1 completion:(id /* block */)a2;
- (void)process1091Error:(id)a0 fullData:(id)a1 completion:(id /* block */)a2;
- (void)process1093Error:(id)a0 fullData:(id)a1 completion:(id /* block */)a2;
- (void)process2046Error:(id)a0 fullData:(id)a1 completion:(id /* block */)a2;
- (id)transforToModel:(Class)a0 rawData:(id)a1 error:(id *)a2;
- (void)showAntispamAlertWithError:(id)a0 fullData:(id)a1 completion:(id /* block */)a2;
- (void)processAppealErrorWithJSON:(id)a0 error:(id)a1;
- (void)process1470Error:(id)a0 fullData:(id)a1 completion:(id /* block */)a2;

@end
