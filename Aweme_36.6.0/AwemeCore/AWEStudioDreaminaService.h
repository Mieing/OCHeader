@class NSString;

@interface AWEStudioDreaminaService : NSObject <AWEStudioDreaminaService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tryOpenDreaminaWithSchema:(id)a0 awemeID:(id)a1 zlink:(id)a2;
- (BOOL)isAppInstalled;

@end
