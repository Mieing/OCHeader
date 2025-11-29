@class AWEPaddingButton;

@interface AWENewPublishGoodsTableCell : AWENewPublishTableCell

@property (retain, nonatomic) AWEPaddingButton *goodsInfo;
@property (nonatomic, getter=isDisable) BOOL disable;

- (void)addSubviewsForContentView;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
