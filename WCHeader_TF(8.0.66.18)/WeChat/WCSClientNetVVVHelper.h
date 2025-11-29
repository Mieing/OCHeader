@class NSString;

@interface WCSClientNetVVVHelper : NSObject <SKPaymentTransactionObserver>

@property (retain) NSString *asid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
