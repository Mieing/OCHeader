@class NSString;

@interface AWEIMChatCellVerifyIconComponent : AWEIMChatCellComponentBase

@property (nonatomic) BOOL hasRender;
@property (copy, nonatomic) NSString *vString;
@property (nonatomic) long long verifyType;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (void)onCellWillRenderForCurrentComponent;
- (void)updateComponentWhenCellWillRender;
- (void).cxx_destruct;

@end
