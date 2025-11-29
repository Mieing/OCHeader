@class UILabel, AWEPOICityDetailTagItem, UIView;

@interface AWEPOICityDetailTagItemView : UIView

@property (retain, nonatomic) AWEPOICityDetailTagItem *tagItem;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *selectedView;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)buildSubviews;
- (void)fillData;
- (void)setupSelectedStyle:(BOOL)a0;
- (id)initWithTagItem:(id)a0 selectedView:(id)a1 clickBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)tapAction:(id)a0;

@end
