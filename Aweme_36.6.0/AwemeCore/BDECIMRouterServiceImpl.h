@class NSString;

@interface BDECIMRouterServiceImpl : NSObject <BDECIMRouterService_I>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)canOpenURLString:(id)a0;
- (void)openURLString:(id)a0;
- (void)openURLString:(id)a0 unitBtmId:(id)a1 host:(id)a2 bcm:(id)a3;

@end
