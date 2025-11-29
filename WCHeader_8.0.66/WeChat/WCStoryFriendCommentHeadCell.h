@class MMCPLabel, UIView, NSString, WCStoryComment, RichTextView, MMHeadImageView;
@protocol WCStoryFriendCommmentHeadCellDelegate;

@interface WCStoryFriendCommentHeadCell : UITableViewCell <UIGestureRecognizerDelegate>

@property (retain, nonatomic) WCStoryComment *comment;
@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMCPLabel *userNameLabel;
@property (retain, nonatomic) RichTextView *commentView;
@property (retain, nonatomic) UIView *separateLine;
@property (weak, nonatomic) id<WCStoryFriendCommmentHeadCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForComment:(id)a0;
+ (unsigned long long)getRichTextViewParserType;
+ (id)getRichTextViewFont;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateUI;
- (void)setup;
- (void)setupSubviews;
- (void)setupGesture;
- (id)getUserLabelText;
- (void)onContentViewDidClick;
- (void)onHeadViewDidClick;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;

@end
