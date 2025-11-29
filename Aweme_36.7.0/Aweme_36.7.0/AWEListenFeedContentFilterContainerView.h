@class AWEListenFeedContentFilterDismissView, NSArray, NSString, UIScrollView, AWEListenFeedContext;
@protocol AWEListenFeedContentFilterContainerDelegate;

@interface AWEListenFeedContentFilterContainerView : UIView <AWEListenFeedContentFilterDismissViewDelegate, AWEListenFeedContentFilterContainerViewProtocol>

@property (retain, nonatomic) UIScrollView *contentFilterScrollView;
@property (retain, nonatomic) AWEListenFeedContentFilterDismissView *dismissView;
@property (retain, nonatomic) NSArray *modelArray;
@property (nonatomic) BOOL needDelayTrack;
@property (retain, nonatomic) AWEListenFeedContext *context;
@property (nonatomic) double contentFilterViewHeight;
@property (weak, nonatomic) id<AWEListenFeedContentFilterContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissClicked;
- (double)filterViewHeight;
- (void)updateByModelArray:(id)a0 context:(id)a1;
- (void)trackListenModelShow;
- (void)initSubviews;
- (void).cxx_destruct;
- (void)refresh;
- (id)init;
- (void)show;
- (double)pageWidth;

@end
