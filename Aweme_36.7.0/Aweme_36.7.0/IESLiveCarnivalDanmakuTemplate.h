@class NSString, HTSLiveImage, IESLiveFlexImage;

@interface IESLiveCarnivalDanmakuTemplate : NSObject

@property (nonatomic) double fontSize;
@property (nonatomic) double avatarSize;
@property (copy, nonatomic) NSString *textColorStr;
@property (retain, nonatomic) IESLiveFlexImage *flexBackgroundImage;
@property (retain, nonatomic) HTSLiveImage *backgroundImage;
@property (nonatomic) double backgroundImageHeight;
@property (nonatomic) double backgroundImageWidth;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } useRateRange;
@property (nonatomic) BOOL verticalWordLayout;
@property (nonatomic) BOOL webpBackground;
@property (nonatomic) BOOL eggShowAlone;

- (void).cxx_destruct;

@end
