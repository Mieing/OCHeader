@class NSString, AWEPOICommentFeedbackButton, AWEPOICommentFeedbackConfig, AWEPOICommentFeedbackProvider;

@interface AWEPOICommentFeedbackView : UIView <AWEPOICommentFeedbackButtonDelegate, AWEPOICommentFeedbackProtocol>

@property (retain, nonatomic) AWEPOICommentFeedbackButton *likeView;
@property (retain, nonatomic) AWEPOICommentFeedbackButton *dislikeView;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) AWEPOICommentFeedbackConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWEPOICommentFeedbackProvider *provider;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } layoutSize;

- (void)feedbackButton:(id)a0 didChangeStatus:(unsigned long long)a1 toStatus:(unsigned long long)a2;
- (void)setFeedUGCItemModel:(id)a0;
- (void)updateSkinConfig:(id)a0;
- (BOOL)hasDislike;
- (BOOL)hasLike;
- (id)initWithConfig:(id)a0 feedbackBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setProvider:(id)a0;
- (void)updateConstraints;
- (id)provider;
- (void)setup;

@end
