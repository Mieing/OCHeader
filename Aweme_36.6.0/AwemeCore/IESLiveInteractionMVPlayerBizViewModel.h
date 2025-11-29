@class NSArray, UIView;
@protocol IESLiveInteractionMVPlayerBizViewModelDelegate, IESLiveInteractionMVPlayerBizViewModelDataSource;

@interface IESLiveInteractionMVPlayerBizViewModel : NSObject

@property (nonatomic) double playerWidth;
@property (nonatomic) double playerHeight;
@property (nonatomic) BOOL enableMaskView;
@property (nonatomic) double maskAlpha;
@property (nonatomic) BOOL enableDynamicColorBG;
@property (nonatomic) BOOL enablePlayerGradient;
@property (copy, nonatomic) NSArray *atmosphereFrameColorData;
@property (nonatomic) double colorTransferInterval;
@property (nonatomic) BOOL staticBG;
@property (nonatomic) long long startIndex;
@property (readonly, copy, nonatomic) NSArray *targetColorsRGBValue;
@property (weak, nonatomic) UIView *playerView;
@property (weak, nonatomic) id<IESLiveInteractionMVPlayerBizViewModelDelegate> delegate;
@property (weak, nonatomic) id<IESLiveInteractionMVPlayerBizViewModelDataSource> dataSource;

- (void)updateAtmosphereFrameColorData:(id)a0 startIndex:(unsigned long long)a1 playDuration:(double)a2 staticBG:(BOOL)a3;
- (void)updatePerformanceDegradeMVBackground:(BOOL)a0;
- (id)initWithMVBackgroundConfig:(id)a0;
- (void).cxx_destruct;

@end
