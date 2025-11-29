@class IESIMStreakFlameViewConfig;
@protocol AWEIMStreakDisplayManagerProtocol;

@interface AWEIMChatCellConsecutiveChatTagPresenter : AWEIMCellPresenterBase

@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (retain, nonatomic) IESIMStreakFlameViewConfig *viewConfig;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (void).cxx_destruct;

@end
