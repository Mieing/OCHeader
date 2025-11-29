@class IESIMStreakFlameViewConfig;

@interface AWEIMChatCellRedPacketPresenter : AWEIMCellPresenterBase

@property (retain, nonatomic) IESIMStreakFlameViewConfig *config;

- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (long long)cellAccessibilityOrder;
- (void).cxx_destruct;

@end
