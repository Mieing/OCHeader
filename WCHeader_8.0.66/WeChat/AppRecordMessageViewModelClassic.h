@interface AppRecordMessageViewModelClassic : CommonMessageViewModel

@property (readonly, nonatomic) double titleHeight;
@property (readonly, nonatomic) double descHeight;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)additionalAccessibilityDescription;

@end
