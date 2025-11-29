@class NSString;

@interface BDPAutoUpdateClientAIRegulusRule : NSObject <BDPAutoTestable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)sharedInstance;

@end
