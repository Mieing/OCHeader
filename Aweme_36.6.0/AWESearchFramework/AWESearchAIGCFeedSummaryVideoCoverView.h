@class AWESearchAIGCChatVideoContainer;

@interface AWESearchAIGCFeedSummaryVideoCoverView : AWESearchCachalotBaseCardView

@property (retain, nonatomic) AWESearchAIGCChatVideoContainer *videoContainer;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
