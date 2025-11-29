@class UIImageView, MMLiveTaskId, NSString;

@interface MMFinderLiveKTVSingleIconView : UIView

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) NSString *ktvThemeResourceFetchSessionToken;

+ (double)preferHeight;

- (id)initWithTaskId:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateMainWidgetsColor:(id)a0;
- (id)liveTask;
- (void).cxx_destruct;

@end
