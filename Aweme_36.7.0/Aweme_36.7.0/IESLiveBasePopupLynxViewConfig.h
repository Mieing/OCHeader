@class UIColor, NSString;

@interface IESLiveBasePopupLynxViewConfig : IESLiveBaseLynxViewConfig

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double radius;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL forbidAnimation;
@property (nonatomic) BOOL shouldUseLandScapeSize;
@property (copy, nonatomic) NSString *showMask;
@property (nonatomic) double maskBackgroundColorAlpha;
@property (retain, nonatomic) UIColor *maskBackgroundColor;
@property (nonatomic) BOOL enableFullScreen;

- (void).cxx_destruct;

@end
