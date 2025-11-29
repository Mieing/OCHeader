@class NSString;

@interface AWEFormatCache : HTSService <AWEFormatCache>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBotIdCacheByFormatId:(long long)a0 formatId:(long long)a1;
- (void)setFormatIdCacheByBotId:(long long)a0 botId:(long long)a1;
- (id)getBotIdCacheByFormatId:(long long)a0;
- (id)getFormatIdCacheByBotId:(long long)a0;
- (BOOL)currentFormatOwnerHasConfirmGuide:(long long)a0;
- (void)setCurrentFormatOwnerGuideState:(long long)a0 didConfirm:(BOOL)a1;
- (id)getBotIdCacheKeyWithFormatId:(long long)a0;
- (id)getFormatIdCacheKeyWithBotId:(long long)a0;
- (id)getFormatGuideCacheKey:(long long)a0;

@end
