@class NSString;

@interface AWEIMChatCellDetailComponent : AWEIMChatCellComponentBase <AWEIMChatCellTailProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)updateComponentWhenChatUpdate:(id)a0;
- (long long)currentComponentTailType;

@end
