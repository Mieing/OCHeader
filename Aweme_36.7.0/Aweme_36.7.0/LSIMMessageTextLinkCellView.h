@class LSIMMessageCardTextLinkCellVM;

@interface LSIMMessageTextLinkCellView : LSIMMessageTextCellView

@property (retain, nonatomic) LSIMMessageCardTextLinkCellVM *cellVM;

- (void)configWithCellVM:(id)a0;
- (id)makeMessageAttributedString;
- (double)labelContentWidth;

@end
