@class NSArray, NSString, WCGridView, UILabel;

@interface WCTogetherImageFeedCell : WCTogetherBaseFeedCell <WCImageViewDelegate>

@property (retain, nonatomic) WCGridView *imageGridView;
@property (copy, nonatomic) NSArray *imageViews;
@property (retain, nonatomic) UILabel *imageCountLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (double)heightForItemContentViewWithViewItem:(id)a0 inTableView:(id)a1;

- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)loadItemContentView;
- (void)layoutItemContentView;
- (void)onClickWCImage:(id)a0;
- (void).cxx_destruct;

@end
