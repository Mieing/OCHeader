@class NSArray, UIScrollView, NSString;
@protocol WCFinderTabPageViewBasicViewDelegate;

@interface WCFinderLiveTopicTemplateTabContainerView : UIView <WCFinderTabPageViewBasicProtocol>

@property (retain, nonatomic) NSArray *tabViews;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) unsigned long long selectedIndex;
@property (weak, nonatomic) id<WCFinderTabPageViewBasicViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addTabWithName:(id)a0;
- (void)addTabWithTabView:(id)a0;
- (void)adjustTabViewFrame;
- (unsigned long long)currentSelectIndex;
- (id)init;
- (id)initWithTabNameArray:(id)a0;
- (id)initWithTabViewArray:(id)a0;
- (void)layoutSubviews;
- (BOOL)removeTabAtIndex:(unsigned long long)a0;
- (void)setSelectIndex:(unsigned long long)a0;
- (void)setTabName:(id)a0 atIndex:(unsigned long long)a1;
- (void)didTapScrollView:(id)a0;
- (void)setSelectedForTabView:(BOOL)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;

@end
