@class NSString;

@interface BrandFastListHandler : NSObject <FastListHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onBeforeCleanCache:(id)a0;
- (void)onAfterCleanCache:(id)a0;

@end
