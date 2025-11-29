@class UILabel, AFDSkylightPanelBubble, UIImageView, UIView, AWELocalMomentNotesInfo, UIButton;

@interface AFDCloseFriendsNotesReplyPanelView : UIView

@property (retain, nonatomic) AWELocalMomentNotesInfo *notesInfo;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) AFDSkylightPanelBubble *bubbleView;
@property (copy, nonatomic) id /* block */ onCloseButtonDidTapBlock;

- (id)initWithBubble:(id)a0;
- (void)onCloseButtonTapped;
- (id)timeAgo;
- (void)updateWithNotesInfo:(id)a0 avatarURL:(id)a1;
- (void)updateContentWithTopOffset:(double)a0;
- (id)notesText;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupContentView;

@end
