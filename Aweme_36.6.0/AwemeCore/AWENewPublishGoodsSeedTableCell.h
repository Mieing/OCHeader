@class UILabel, UIView;

@interface AWENewPublishGoodsSeedTableCell : AWENewPublishTableCell

@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIView *seperatorLine;
@property (nonatomic, getter=isDisable) BOOL disable;

- (void)addSubviewsForContentView;
- (void)updateTagLabel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
