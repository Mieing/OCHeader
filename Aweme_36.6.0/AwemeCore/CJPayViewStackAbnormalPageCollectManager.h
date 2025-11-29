@class NSString;

@interface CJPayViewStackAbnormalPageCollectManager : NSObject <CJPayAbnormalPageCheckService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (void)postAbnormalPageMessageWithFilterType:(long long)a0;
- (BOOL)p_openAbnormalPageCheck;
- (double)p_getDelayTime:(long long)a0;

@end
