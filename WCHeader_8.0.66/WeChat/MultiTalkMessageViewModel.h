@class NSDictionary;

@interface MultiTalkMessageViewModel : BaseMessageViewModel

@property (readonly, nonatomic) NSDictionary *contentJsonDict;
@property (readonly, nonatomic) double headerContentHeight;
@property (readonly, nonatomic) double nodeContentWidth;
@property (readonly, nonatomic) double nodeContentHeight;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (void)initMultiTalkNodeViewData;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
