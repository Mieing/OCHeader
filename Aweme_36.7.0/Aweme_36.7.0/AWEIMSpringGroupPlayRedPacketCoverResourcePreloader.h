@class NSString;

@interface AWEIMSpringGroupPlayRedPacketCoverResourcePreloader : HTSService <AWEIMSpringGroupPlayRedPacketCoverResourcePreloader, AWEAppAwemeSettingMessage>

@property (nonatomic) BOOL hasPreloadedCoverResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)awemeSettingDidChange;
- (void)dealloc;

@end
