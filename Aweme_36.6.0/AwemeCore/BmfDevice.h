@class NSString;

@interface BmfDevice : NSObject <IBmfDevice>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)set_current:(id)a0;

@end
