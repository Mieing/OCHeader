@class NSString;

@interface AWESearchCachalotLoggerAdapter : NSObject <CachalotLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cachalot_logWithTag:(id)a0 andContent:(id)a1;

@end
