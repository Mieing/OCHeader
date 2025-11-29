@class NSString;

@interface AWESiriIntentsInitTask : NSObject <HTSAppLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)onAppHandleIntent;
- (BOOL)isMediaIntentsDonationEnabled;
- (BOOL)isSupportedIntent:(id)a0;

@end
