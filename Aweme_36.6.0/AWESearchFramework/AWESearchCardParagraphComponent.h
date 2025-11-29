@class UITapGestureRecognizer, AWESearchEventDispather, NSDictionary, NSString, AWESearchCardParagraphComponentModel, AWESearchCardParagraphLabel;
@protocol AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchCardParagraphComponent : AWESearchComponent <AWESearchCardParagraphComponentProvider>

@property (retain, nonatomic) AWESearchCardParagraphLabel *paragraphLabel;
@property (retain, nonatomic) AWESearchCardParagraphComponentModel *componentModel;
@property (retain, nonatomic) UITapGestureRecognizer *contentTapGesture;
@property (copy, nonatomic) id /* block */ tapContentBlock;
@property (copy, nonatomic) id /* block */ tapNickNameBlock;
@property (copy, nonatomic) id /* block */ tapHashtagBlock;
@property (copy, nonatomic) id /* block */ tapSearchWordBlock;
@property (copy, nonatomic) id /* block */ tapParagraphSuffix;
@property (copy, nonatomic) id /* block */ tapParagraphPrefix;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;

- (void)componentDidLoad;
- (void)didSelectLinkWithURL:(id)a0;
- (void)componentViewDidStartShowing;
- (id)p_context;
- (void)textComponentClickTrackerWith:(id)a0;
- (void)enterPersonalDetailTracker:(id)a0 toUserID:(id)a1;
- (void)chanllengeTitleClickTrackerWith:(id)a0;
- (void)searchWordClickWithText:(id)a0;
- (void)trendingWordsClickTrackerWith:(id)a0;
- (void)textComponentShowTracker;
- (void)chanllengeTitleShowTracker;
- (void)trendingWordsShowTracker;
- (void)didTapParagraphContent:(id)a0;
- (void).cxx_destruct;
- (id)componentView;
- (id)router;
- (void)updateWithModel:(id)a0;

@end
