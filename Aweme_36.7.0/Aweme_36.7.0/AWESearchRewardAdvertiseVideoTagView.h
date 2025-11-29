@class UILabel;

@interface AWESearchRewardAdvertiseVideoTagView : UIView

@property (retain, nonatomic) UILabel *previewLabel;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long lastRemainTime;

- (void)updateStartTime:(double)a0 endTime:(double)a1;
- (void)updateCurrentTime:(double)a0;
- (void)updatePaidStatus:(BOOL)a0;
- (id)attributedTextWithText:(id)a0;
- (void)updateRemainTime:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)setupUI;

@end
