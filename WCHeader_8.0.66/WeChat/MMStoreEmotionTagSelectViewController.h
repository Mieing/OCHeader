@class FavTagListView, NSString, NSArray, NSDictionary, UIView, MMUIScrollView, UIViewController;
@protocol MMStoreEmotionTagSelectDelegate;

@interface MMStoreEmotionTagSelectViewController : MMUIViewController <FavTagEditViewDelegate> {
    UIViewController *m_blurViewController;
    UIView *m_backgroundView;
    NSArray *m_tagDescList;
    NSDictionary *m_tagDic;
    NSString *m_lastSelectedTagDesc;
    MMUIScrollView *m_scrollView;
    FavTagListView *m_tagListView;
}

@property (weak, nonatomic) id<MMStoreEmotionTagSelectDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTagList:(id)a0 AndSelectedTag:(id)a1;
- (void)setBlurViewFromViewController:(id)a0;
- (void)viewDidLoad;
- (void)initView;
- (void)configNavigationBar;
- (void)configScrollView;
- (void)updateScrollView;
- (void)configTagListView;
- (void)onTopBarFrameChanged;
- (void)configBackgrounView;
- (void)OnCancelClick;
- (void)onTagHighLight:(id)a0;
- (void)onTouchEndBlankView;
- (void).cxx_destruct;

@end
