@class NSString;

@interface AWEProfileMultiIPBaseComponent : AWEProfileBaseComponent <AWEProfileMultiIPProtocol>

@property (nonatomic) BOOL linkAreaIPShow;
@property (nonatomic) long long linkAreaCount;
@property (nonatomic) BOOL personalTagIPShow;
@property (nonatomic) long long personalTagCount;
@property (nonatomic) BOOL hasTrackedMultiIPShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkIPLabelCanShowWithArea:(long long)a0;
- (void)reportIPLabelShow:(BOOL)a0 area:(long long)a1 count:(long long)a2;
- (void)onInit;

@end
