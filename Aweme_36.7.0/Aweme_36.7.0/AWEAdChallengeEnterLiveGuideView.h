@class NSString, MBCircularProgressBarView, AWEChallengeModel, UILabel;

@interface AWEAdChallengeEnterLiveGuideView : UIView <AWEAdChallengeEnterLiveGuideView>

@property (retain, nonatomic) UILabel *slideDownLabel;
@property (retain, nonatomic) MBCircularProgressBarView *circleProgressView;
@property (nonatomic) long long status;
@property (copy, nonatomic) id /* block */ widthChangeBlock;
@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchToStatus:(long long)a0;
- (id)textWithStatus:(long long)a0;
- (void)setupSubViewWithModel:(id)a0;
- (void)updateProgressWithOffset:(double)a0;
- (double)rawWidth;
- (void).cxx_destruct;
- (id)init;
- (void)setupView;

@end
