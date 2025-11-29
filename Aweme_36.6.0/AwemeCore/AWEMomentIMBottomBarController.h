@class NSObject, NSString, AWEAwemeModel, UILabel, UIView, UIButton;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEMomentIMBottomBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) UIView *momentBottomBarView;
@property (retain, nonatomic) UIButton *emojiIcon;
@property (retain, nonatomic) UIView *textContainer;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSObject<AWEAwemeDetailBottomBarCommonContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)trackNewSendMessageEvent;
- (void)openQuickReplyHandlerUsing:(long long)a0;
- (void)trackCloseFriendsMoment;
- (void)didTapTextReply;
- (void)didTapEmojiReply;
- (void).cxx_destruct;
- (Class)contextClass;
- (id)bottomBarView;

@end
