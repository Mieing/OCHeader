@class NSString, AWEBinding, AWEIMConsecutiveChatModel;
@protocol AWEIMChatListTrackerInterface;

@interface AWEIMChatCellConsecutiveChatTagComponent : AWEIMChatCellComponentBase <AWEIMStreakDisplayManagerDelegate>

@property (weak, nonatomic) id<AWEIMChatListTrackerInterface> tracker;
@property (retain, nonatomic) AWEIMConsecutiveChatModel *consecutiveChatModel;
@property (copy, nonatomic) NSString *conversationID;
@property (retain) AWEBinding *sharedExtBinding;
@property (retain) AWEBinding *localExtBinding;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)onThemeChanged;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (id)presenterForSnapshot;
- (id)customIMStreakTextFont;
- (void)asyncDidUpdateIMStreakViewWithViewConfig:(id)a0;
- (void)asyncDidUpdateIMStreakView;
- (void)checkHintStatusWithChat:(id)a0;
- (void).cxx_destruct;

@end
