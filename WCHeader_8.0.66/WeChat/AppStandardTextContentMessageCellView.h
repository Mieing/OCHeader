@class AppStandardTextContentMessageViewModel, NSArray, AppStandardContentSourceView, MMUILabel;

@interface AppStandardTextContentMessageCellView : CommonMessageCellView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *contentLabel;
@property (retain, nonatomic) NSArray *contentImgViewList;
@property (retain, nonatomic) AppStandardContentSourceView *sourceView;
@property (readonly, nonatomic) AppStandardTextContentMessageViewModel *viewModel;

- (void)prepareForReuse;
- (void)layoutContentView;
- (void)initTitle;
- (void)initContent;
- (void)initSourceView;
- (void)createOrUpdateLayout;
- (id)contentImgViewsInSize:(struct CGSize { double x0; double x1; })a0 limit:(unsigned long long)a1;
- (void).cxx_destruct;

@end
