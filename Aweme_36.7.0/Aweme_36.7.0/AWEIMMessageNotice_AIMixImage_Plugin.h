@class NSString;

@interface AWEIMMessageNotice_AIMixImage_Plugin : AWEIMFlexComponent <AWEIMMessageNoticePluginProtocol, AWEIMMessageNotice_Action_Publisher, AWEIMMessageNotice_NewStyle_Action_Publisher>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)noticeMessage:(id)a0 didClickWithTemplateModelIndex:(long long)a1;
- (void)didTapNewStyleNoticeMessage:(id)a0;
- (void)p_trackGroupNoticeMessageShow;
- (id)p_noticeType:(long long)a0;

@end
