@class NSString;

@interface HTSEventContextExtensionAdapterImpl : IESLiveBaseAdapter <HTSEventContextExtensionAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)actionTypeWithTrackContext:(id)a0;
- (void)addAttributesFromRoom:(id)a0 trackContext:(id)a1;

@end
