@class NSString;

@interface FavoritesFastListHandler : NSObject <FastListHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getDynamicRulesOnScene:(int)a0;
- (void)onAfterCleanCache:(id)a0;

@end
