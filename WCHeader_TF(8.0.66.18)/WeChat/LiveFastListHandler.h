@class MMLiveStorageCleanupContext, NSString;

@interface LiveFastListHandler : NSObject <FastListHandler>

@property (retain, nonatomic) MMLiveStorageCleanupContext *context;
@property (nonatomic) BOOL ignoreClean;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getDynamicRulesOnScene:(int)a0;
- (void)onBeforeCleanCache:(id)a0;
- (void)onAfterCleanCache:(id)a0;
- (void).cxx_destruct;

@end
