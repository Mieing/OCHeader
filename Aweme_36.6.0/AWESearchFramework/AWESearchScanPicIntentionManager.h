@class NSString;

@interface AWESearchScanPicIntentionManager : NSObject <AWESearchScanPicIntentionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateBusiness;
- (void)getPicIntentionResultWithImage:(id)a0 completion:(id /* block */)a1;
- (id)init;

@end
