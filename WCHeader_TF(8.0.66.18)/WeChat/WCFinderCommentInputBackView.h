@class WCFinderMemberCommentInputAreaTipsView;

@interface WCFinderCommentInputBackView : UIView

@property (nonatomic) unsigned long long displayMode;
@property (retain, nonatomic) WCFinderMemberCommentInputAreaTipsView *membershipTipsView;

- (void)layoutSubviews;
- (void)updateWithDisplayMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end
