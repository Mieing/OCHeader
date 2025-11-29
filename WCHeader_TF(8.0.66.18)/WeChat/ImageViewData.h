@class NSString, DynamicColor;

@interface ImageViewData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *viewId;
@property (nonatomic) float nonCrossplatformWidth;
@property (nonatomic) float nonCrossplatformHeight;
@property (retain, nonatomic) DynamicColor *color;
@property (retain, nonatomic) NSString *darkModeUrl;
@property (nonatomic) float crossplatformWidth;
@property (nonatomic) float crossplatformHeight;

+ (void)initialize;

@end
