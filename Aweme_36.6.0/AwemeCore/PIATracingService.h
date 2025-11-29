@class NSString, PIABiMapTable;

@interface PIATracingService : NSObject <PIATracingService>

@property (retain, nonatomic) PIABiMapTable *engineMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

@end
