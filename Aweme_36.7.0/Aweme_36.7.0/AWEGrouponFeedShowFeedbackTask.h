@class NSMutableDictionary, NSString, AWEGrouponLynxContainerView, AWEGrouponFeedFeedbackModel, AWEGrouponPageContext, AWEGrouponC2BaseFeedCell;
@protocol AWEGrouponFeedShowFeedbackTaskDelegate;

@interface AWEGrouponFeedShowFeedbackTask : NSObject <AWEGrouponLynxContainerViewDelegate>

@property (weak, nonatomic) AWEGrouponC2BaseFeedCell *feedCell;
@property (retain, nonatomic) AWEGrouponLynxContainerView *feedbackView;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL successLoadLynxView;
@property (retain, nonatomic) NSMutableDictionary *subscriberMap;
@property (retain, nonatomic) AWEGrouponFeedFeedbackModel *feedbackModel;
@property (weak, nonatomic) AWEGrouponPageContext *pageContext;
@property (weak, nonatomic) id<AWEGrouponFeedShowFeedbackTaskDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxContainer:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)lynxContainer:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (BOOL)isTheFeedbackTaskEffectiveAtLongPress:(id)a0;
- (void)showFeedbackOnFeedComponent:(id)a0 longPressGestureRecognizer:(id)a1;
- (void)removeFeedback;
- (void)registerEventSubscribers;
- (void)removeEventSubscriber;
- (id)lynxUrlFromFeedbackConfig;
- (id)feedbackOptionDataWithCardType:(id)a0;
- (id)lynxModelFromFeedbackOptionData:(id)a0 lynxUrl:(id)a1 feedbackModel:(id)a2;
- (id)createFeedbackViewWithLynxModel:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)closeFeedbackEventHandler:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
