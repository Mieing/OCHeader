@class UIColor, UIView;

@interface IESSeekProgressModel : IESLiveDynamicModel

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *highLightColor;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double startProgress;
@property (nonatomic) double endProgress;
@property (weak, nonatomic) UIView *seekBarView;

- (void).cxx_destruct;

@end
