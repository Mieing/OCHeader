@class NSString;

@interface WCFinderPageRestoreHandler : NSObject <PageRestoreHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bizIconName;
- (BOOL)canRestorePage:(id)a0;
- (void)restorePage:(id)a0;

@end
