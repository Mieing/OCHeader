@class UILabel, NSDateFormatter, NSTimer;

@interface WCDebugTimeTool : NSObject

@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSTimer *timer;

+ (void)showTimeLabel;
+ (void)showTimeLabelInWindow:(id)a0;
+ (void)bringToTop;
+ (void)removeTimeLabel;

- (void)p_doShowTimeLable:(id)a0;
- (void)p_doRemoveTimeLabel;
- (void).cxx_destruct;

@end
