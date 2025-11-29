@class NSString, UIImage;

@interface VoiceNodataMessageViewModel : CommonMessageViewModel

@property (readonly, nonatomic) NSString *statusTips;
@property (readonly, nonatomic) UIImage *iconImage;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)additionalAccessibilityDescription;

@end
