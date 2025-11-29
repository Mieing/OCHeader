@class AWEPOICommentFeedbackConfig, UIView;
@protocol AWEPOICommentFeedbackHostProtocol, AWEPOICommentFeedbackProtocol;

@interface AWEPOICommentFeedbackProvider : NSObject

@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) UIView<AWEPOICommentFeedbackProtocol> *feedback;
@property (retain, nonatomic) AWEPOICommentFeedbackConfig *config;
@property (readonly, nonatomic) UIView<AWEPOICommentFeedbackProtocol> *commentFeedBackView;
@property (weak, nonatomic) UIView<AWEPOICommentFeedbackHostProtocol> *host;

+ (double)feedbackViewHeightWithConfig:(id)a0;

- (void)invokeLayout;
- (void)hostModelDidUpdate:(id)a0;
- (void)feedbackAction:(unsigned long long)a0;
- (void)showAndTrackDigToastWithType:(unsigned long long)a0 hasDigged:(BOOL)a1 hasBuried:(BOOL)a2;
- (void)trackDigEventWithType:(unsigned long long)a0 hasDigged:(BOOL)a1 hasBuried:(BOOL)a2;
- (void)trackDigEventWithType:(unsigned long long)a0 hasDigged:(BOOL)a1 hasBuried:(BOOL)a2 hasFailed:(BOOL)a3;
- (void)updateDigStatusWithType:(unsigned long long)a0 hasDigged:(BOOL)a1 hasBuried:(BOOL)a2;
- (void)sendRequestForDigWithType:(unsigned long long)a0 hasDigged:(BOOL)a1 hasBuried:(BOOL)a2 completionBlock:(id /* block */)a3;
- (void)updateDigModelAndUI:(id)a0 hasDigged:(BOOL)a1 hasBuried:(BOOL)a2 diggedCount:(long long)a3;
- (void)publishBDXEventWithActionType:(id)a0 diggedCount:(long long)a1;
- (id)createFeedbackView;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
