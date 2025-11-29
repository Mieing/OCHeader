@class NSNumber, UIColor;

@interface RTVPreviewViewConfiguration : NSObject

@property (nonatomic) BOOL needAudioIndicator;
@property (nonatomic) BOOL needAvatarView;
@property (nonatomic) BOOL needAvatarViewBackground;
@property (nonatomic) BOOL needBackgroundBlurView;
@property (nonatomic) double maxAvatarWidth;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL tapDismissNeedCheckCameraOn;
@property (retain, nonatomic) NSNumber *audioIndicatorMargin;
@property (nonatomic) BOOL enableAvatarOuterBorder;
@property (retain, nonatomic) UIColor *audioIndicatorBorderCorlor;

- (void).cxx_destruct;
- (id)init;

@end
