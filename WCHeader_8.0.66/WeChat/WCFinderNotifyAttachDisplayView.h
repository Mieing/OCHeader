@class WCFinderCommentEmoticonView, NSString, WCFinderMention, WCFinderCommentImageView;

@interface WCFinderNotifyAttachDisplayView : UIView <WCFinderCommentEmoticonViewDelegate, WCFinderCommentImageViewDelegate>

@property (retain, nonatomic) WCFinderMention *mention;
@property (retain, nonatomic) WCFinderCommentImageView *imageView;
@property (retain, nonatomic) WCFinderCommentEmoticonView *emoticonView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)updateWithMention:(id)a0;
- (void)finderCommentImageView:(id)a0 didClickWithComment:(id)a1;
- (void)finderCommentEmoticonView:(id)a0 didClickEmoticonView:(id)a1;
- (id)finderCommentEmoticonViewGetFeedId;
- (id)finderCommentImageViewGetFeedId;
- (void)clickAction;
- (void).cxx_destruct;

@end
