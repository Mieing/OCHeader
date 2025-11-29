@class UIColor, NSString, HTSLiveImage, UIView;

@interface IESLiveSeekProgressModel : IESLiveDynamicModel

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *highLightColor;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double startProgress;
@property (nonatomic) double endProgress;
@property (weak, nonatomic) UIView *seekBarView;
@property (copy, nonatomic) NSString *description_p;
@property (retain, nonatomic) HTSLiveImage *smallImage;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL shouldShow;

- (void).cxx_destruct;

@end
