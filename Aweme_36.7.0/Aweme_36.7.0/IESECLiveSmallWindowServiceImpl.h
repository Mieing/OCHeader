@class NSString;

@interface IESECLiveSmallWindowServiceImpl : NSObject <IESECLiveSmallWindowService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerAllowListVCClass:(Class)a0 withTag:(id)a1;
- (BOOL)hasWindowView;

@end
