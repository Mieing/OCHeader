@class NSString;

@interface AWEFantaTujiActFeatureProvider : NSObject <FantaDataCollectorListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)onDataCollector:(id)a0 collectData:(id)a1;
- (void)loadFeatureProvider;

@end
