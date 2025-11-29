@class NSString;

@interface KindaWordingService : NSObject <MMKWordingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getWording:(id)a0 subkey:(id)a1;

@end
