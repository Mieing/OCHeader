@class NSMutableArray, WCPayNetImageResource;

@interface PocketMoneyMessageViewModel : CommonMessageViewModel

@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (nonatomic) struct CGSize { double width; double height; } descSize;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (retain, nonatomic) NSMutableArray *titleLabelStyles;
@property (retain, nonatomic) NSMutableArray *descLabelStyles;
@property (retain, nonatomic) WCPayNetImageResource *iconImageResource;
@property (readonly, nonatomic) double iconSize;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)cellViewClassName;
- (id)titleText;
- (id)descText;
- (id)titleColor;
- (id)descColor;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)sourceTag;
- (id)sourceIconUrlString;
- (void)getIconImageResource:(id /* block */)a0;
- (void).cxx_destruct;

@end
