@class AWECoverTextTitleModel, NSArray, NSString, AWEVideoCoverRecommendTextErrorView, AWEVideoCoverTextTabContext, AWEVideoCoverRecommendTextView;
@protocol AWEVideoCoverRecommendTextViewDelegate;

@interface AWEVideoCoverRecommendTextViewController : UIViewController <AWEVideoCoverRecommendTextViewDelegate>

@property (copy, nonatomic) NSArray *models;
@property (retain, nonatomic) AWEVideoCoverRecommendTextView *recommendView;
@property (copy, nonatomic) NSString *observerIdentifier;
@property (retain, nonatomic) AWEVideoCoverRecommendTextErrorView *errorView;
@property (retain, nonatomic) AWECoverTextTitleModel *currentTitleModel;
@property (retain, nonatomic) AWEVideoCoverTextTabContext *context;
@property (weak, nonatomic) id<AWEVideoCoverRecommendTextViewDelegate> delegate;
@property (nonatomic) BOOL singleLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelSelect;
- (void)recommendTextView:(id)a0 didSelectItem:(id)a1;
- (void)observeDataChangeIfNeeded;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
