@class NewLifeRect;

@interface NewLifePhotoCropInfo : WXPBGeneratedMessage

@property (nonatomic) double translateX;
@property (nonatomic) double translateY;
@property (nonatomic) double scale;
@property (retain, nonatomic) NewLifeRect *cropArea;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;

+ (void)initialize;

@end
