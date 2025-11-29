@class NSString;

@interface AWEIMMessageNotice_Mute_Plugin : AWEIMFlexComponent <AWEIMMessageNoticePluginProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)__trackShowData;
- (void)__fansGroupNoticeTipCellDidTapTracker;
- (void)__didClickedNoticeTipCell;
- (void)__trackEnterNoticeSettingEvent;

@end
