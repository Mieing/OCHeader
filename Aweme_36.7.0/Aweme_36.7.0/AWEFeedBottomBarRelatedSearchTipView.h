@class UIViewController, NSString, UIImageView, AWEAwemeModel, AWEAdSearchBottomBarTapGestureRecognizer, YYLabel;
@protocol AWESearchPredictFetchProtocol;

@interface AWEFeedBottomBarRelatedSearchTipView : UIView <AWEFeedCommerceBottomTipProtocol>

@property (retain, nonatomic) UIViewController<AWESearchPredictFetchProtocol> *searchViewController;
@property (retain, nonatomic) YYLabel *relatedSearchTipLabel;
@property (retain, nonatomic) UIImageView *searchIconImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) AWEAdSearchBottomBarTapGestureRecognizer *recognizer;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *prefetchTag;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)searchSchema;
- (id)wordsSource;
- (void)configureUI;
- (BOOL)enablePredictFetch;
- (void)jumpAction;
- (void)trackAdBottomBarEventWithLabel:(id)a0;
- (void)configureWithModel:(id)a0 referString:(id)a1;
- (void)trackRelatedSearchShowIfNeeded;
- (void)handleRelatedSearchTarget;
- (void)trackRelatedSearchClickIfNeeded;
- (BOOL)shouldGeneralSearchPredictFetch;
- (void)itemTouchCancel;
- (BOOL)shouldPredictFetchInEnd;
- (void)itemTouchBeganIsInEnd:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)configureWithModel:(id)a0;
- (id)bgColor;

@end
