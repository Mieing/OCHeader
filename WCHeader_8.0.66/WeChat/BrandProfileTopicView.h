@class MMUIButton, NSMutableArray, BrandProfileTopicViewModel;
@protocol BrandProfileTopicViewDelegate;

@interface BrandProfileTopicView : MMUIView

@property (retain, nonatomic) BrandProfileTopicViewModel *viewModel;
@property (retain, nonatomic) MMUIButton *unfoldButton;
@property (retain, nonatomic) NSMutableArray *topicButtonList;
@property (weak, nonatomic) id<BrandProfileTopicViewDelegate> delegate;

- (id)initWithViewModel:(id)a0;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)updateSubviewsUseViewModel;
- (void)onTopicButtonClicked:(id)a0;
- (void)onUnfoldButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
