@class UIScrollView, NSString, NSArray;
@protocol LLDitoNestedScrollItemDelegate, LLDitoComponentViewModel, LLDitoComponentView;

@interface LLDitoNestedScrollItem : NSObject <LLDitoViscousDragItemDelegate_Private>

@property (readonly, nonatomic) UIScrollView *bodyContainerView;
@property (readonly, nonatomic) double nestedScrollTopInsetLine;
@property (copy, nonatomic) NSString *key;
@property (weak, nonatomic) UIScrollView *nestedScrollView;
@property (weak, nonatomic) id<LLDitoComponentViewModel> viewModel;
@property (weak, nonatomic) id<LLDitoComponentView> componentView;
@property (nonatomic) BOOL nestedScrollEnabled;
@property (nonatomic) BOOL nestedScrolling;
@property (copy, nonatomic) NSArray *viscousDragItemList;
@property (nonatomic) BOOL skipScrollForViscousDrag;
@property (weak, nonatomic) id<LLDitoNestedScrollItemDelegate> delegate;
@property (nonatomic) unsigned long long scrollState;
@property (nonatomic) BOOL lockNestedScroll;
@property (nonatomic) BOOL boundaryDockingWhenFling;
@property (nonatomic) BOOL isCppList;
@property (nonatomic) unsigned long long positionToTopLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)viscousDragging;
- (BOOL)viscousDragViewBeActivate;
- (void)viscousDragBody:(id)a0;
- (void)viscousDragBody:(id)a0 targetOffset:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)isNestedScrolling;
- (void)viscousDragScrollViewDidScroll:(id)a0;
- (id)findViscousDragItemByScrollView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
