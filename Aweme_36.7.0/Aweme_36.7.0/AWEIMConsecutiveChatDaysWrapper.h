@class AWEIMStreakFlameView, IESIMStreakFlameViewConfig;

@interface AWEIMConsecutiveChatDaysWrapper : UIView

@property (retain, nonatomic) AWEIMStreakFlameView *imStreakView;
@property (retain, nonatomic) IESIMStreakFlameViewConfig *viewConfig;

- (void)addIMStreakView:(id)a0;
- (void)renderIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
