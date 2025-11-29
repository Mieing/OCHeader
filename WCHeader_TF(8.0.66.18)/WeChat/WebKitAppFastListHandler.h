@class NSString;

@interface WebKitAppFastListHandler : NSObject <FastListHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAfterCleanCache:(id)a0;

@end
