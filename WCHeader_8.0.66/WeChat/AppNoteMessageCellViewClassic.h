@class UILabel, AppNoteMessageViewModelClassic;

@interface AppNoteMessageCellViewClassic : CommonMessageCellView {
    UILabel *m_titleLabel;
    UILabel *m_contentLabel;
}

@property (readonly, nonatomic) AppNoteMessageViewModelClassic *viewModel;

- (void)layoutContentView;
- (void)layoutSubviewsImgs:(id)a0 currentHeight:(double)a1;
- (void)layoutSubviewsOnlyText:(id)a0 currentHeight:(double)a1;
- (id)getDisplayImgDatas:(id)a0;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
