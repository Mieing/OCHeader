@class NSString;

@interface IESIMBadgeService : HTSService <IESIMBadgeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)p_duxBadgeStyleWithIESIMStyle:(unsigned long long)a0;
- (id)p_duxBadgeViewConfig:(id)a0;
- (id)createBadge;
- (id)createBadgeWithBadgeStyle:(unsigned long long)a0;
- (id)createBadgeWithBadgeStyle:(unsigned long long)a0 withConfig:(id)a1;
- (id)createBadgeViewConfigWithBadgeStyle:(unsigned long long)a0;

@end
