@class NSString;

@interface BDECIMAssertServiceImpl : NSObject <BDECIMAssertService_I>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)assert:(BOOL)a0 message:(id)a1;

@end
