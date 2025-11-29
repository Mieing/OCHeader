@class NSString, UILabel, UIView, UIButton;
@protocol ProductKeyValueTableCellDelegate;

@interface ProductKeyValueTableCell : MMUIView {
    UILabel *_keyLabel;
    UILabel *_valueLabel;
    UIButton *_expandButton;
    UIView *_marginView;
    BOOL _shouldExpand;
}

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) BOOL isExpanded;
@property (weak, nonatomic) id<ProductKeyValueTableCellDelegate> delegate;

- (id)init;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })updateSizeForCell;
- (void)onViewMore;
- (void).cxx_destruct;

@end
