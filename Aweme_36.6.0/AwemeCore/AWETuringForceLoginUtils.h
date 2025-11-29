@class NSString;

@interface AWETuringForceLoginUtils : NSObject <BDTuringLoginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)bdturingLoginWithCallback:(id /* block */)a0;

@end
