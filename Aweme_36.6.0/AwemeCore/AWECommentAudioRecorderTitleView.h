@class UILabel, NSString, UIColor;

@interface AWECommentAudioRecorderTitleView : AWECommentAudioRecorderBaseView

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *defaultTitle;
@property (copy, nonatomic) NSString *highLightTitle;
@property (retain, nonatomic) UIColor *defaultColor;
@property (retain, nonatomic) UIColor *highLightColor;
@property (copy, nonatomic) NSString *leftTimePreTitle;

- (void)startWorkWithPreState:(unsigned long long)a0 currentState:(unsigned long long)a1;
- (void)stopWorkWithPreState:(unsigned long long)a0 currentState:(unsigned long long)a1;
- (void)willStopWorkWithLeftTime:(double)a0 preState:(unsigned long long)a1 currentState:(unsigned long long)a2;
- (void)setCommonText:(id)a0;
- (void)setHighLightText:(id)a0;
- (void).cxx_destruct;
- (void)updateWithViewModel:(id)a0;

@end
