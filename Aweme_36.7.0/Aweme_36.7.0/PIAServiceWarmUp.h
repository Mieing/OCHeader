@class NSString;

@interface PIAServiceWarmUp : NSObject <PIAServiceWarmUp>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (void)tryWarmUpPIAContextWithURL:(id)a0;
- (id)p_getPageConfigFromURL:(id)a0;

@end
