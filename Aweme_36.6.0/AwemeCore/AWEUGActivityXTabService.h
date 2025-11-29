@class NSString;

@interface AWEUGActivityXTabService : HTSService <AWEUGActivityXTabService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityXTabViewControllerWithSchema:(id)a0 extraParams:(id)a1;
- (BOOL)isHitOOMProtectionWithActivityId:(id)a0;

@end
