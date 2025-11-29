@class NSString;

@interface AWEIMMessageNotice_Recall_Plugin : AWEIMFlexComponent <AWEIMMessageNoticePluginProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)attributedContent;
- (void)componentDidMounted:(id)a0;
- (void)addKVO;
- (void)p_reEditRecalledMessage:(id)a0;
- (id)recallAttributedTextForMessage:(id)a0 actionBlock:(id /* block */)a1;
- (id)recallTextForMessage:(id)a0;
- (id)addReEditAttributedTextForAttributedString:(id)a0 actionBlock:(id /* block */)a1;
- (void)p_reloadDisplayWithCountDown;

@end
