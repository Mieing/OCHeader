@class UIImageView, AWEPublishCoproduceSearchTextField, UIButton;

@interface AWEPublishCoproduceSearchBar : UIView

@property (retain, nonatomic) UIImageView *searchIconImageView;
@property (retain, nonatomic) AWEPublishCoproduceSearchTextField *textField;
@property (retain, nonatomic) UIButton *clearBtn;

- (void)clearButtonClicked:(id)a0;
- (void)setupViewFrame;
- (void)clearSearchView;
- (void).cxx_destruct;
- (void)reset;
- (void)layoutSubviews;

@end
