@class NSString, AFDStoryGradientConfig;
@protocol AWEIMChatCellColorRingViewDelegate;

@interface AWEIMChatCellColorRingPresenter : AWEIMCellPresenterBase <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AFDStoryGradientConfig *config;
@property (weak, nonatomic) id<AWEIMChatCellColorRingViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (void)didClickStoryRing:(id)a0;
- (void).cxx_destruct;

@end
