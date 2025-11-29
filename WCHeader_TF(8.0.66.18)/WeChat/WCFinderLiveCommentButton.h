@class UILabel, WCFinderLiveCommentBlurButtonBackView;

@interface WCFinderLiveCommentButton : WCLiveBottomTextButton

@property (readonly, nonatomic) WCFinderLiveCommentBlurButtonBackView *commentBlurBackView;
@property (nonatomic) unsigned long long unReadAtMeMsgCount;
@property (nonatomic) unsigned long long unReadFriendReplyMeMsgCount;
@property (nonatomic) unsigned long long unReadFriendMsgCount;
@property (nonatomic) long long currentBadgeNum;
@property (nonatomic) BOOL isSynchronizeLayout;
@property (retain, nonatomic) UILabel *commentBadgeLabel;
@property (copy, nonatomic) id /* block */ onCommentPrivateMsgAreaTapCallback;

- (void)layoutUI;
- (void)layoutBackView;
- (void)layoutCommentBadgeLabel;
- (void)udpateCommentBadgeLabelOrigin;
- (void)clearUnReadCount;
- (void)handleUnReadCountChanged;
- (id)getBadgeStr:(long long)a0;
- (void)udpateCommentBadgeLabelHidden;
- (id)getBlurButtonBackView;
- (void)updateCommentBadgeNum:(long long)a0;
- (void)displayPrivateMsgEntrance;
- (void)hidePrivateMsgEntrance;
- (void)displayPrivateMsgEnranceSwitch:(double)a0;
- (void)addUnReadAtMeMsg:(unsigned long long)a0 unReadFriendReplyMeMsg:(unsigned long long)a1 friendMsgCount:(unsigned long long)a2;
- (void)forceLayoutIfNeed;
- (void)handleCommentPrivateMsgAreaTap:(id)a0;
- (void).cxx_destruct;

@end
