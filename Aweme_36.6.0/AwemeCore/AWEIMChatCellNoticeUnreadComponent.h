@class NSString;

@interface AWEIMChatCellNoticeUnreadComponent : AWEIMChatCellComponentBase <AWEIMChatCellTailProvider, AWEIMChatCellHintComponentAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didUpdateWithHintType:(unsigned long long)a0;
- (long long)currentComponentTailType;
- (void)onCellDidClick:(id)a0;
- (void)updatePresenterWithChat:(id)a0 type:(unsigned long long)a1;

@end
