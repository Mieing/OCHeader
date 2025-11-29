@class NSString;

@interface AWEIMMessageNotice_VoipHangUp_Plugin : AWEIMFlexComponent <AWEIMMessageNotice_Action_Publisher>

@property (nonatomic) double lastClickTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_trackShow;
- (void)noticeMessage:(id)a0 didClickWithTemplateModelIndex:(long long)a1;
- (void)p_trackClick;
- (void)p_trackWithExtra:(id)a0 event:(id)a1;

@end
