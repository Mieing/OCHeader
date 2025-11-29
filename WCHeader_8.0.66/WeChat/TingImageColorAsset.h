@class TingRGBAColor;

@interface TingImageColorAsset : WXPBGeneratedMessage

@property (retain, nonatomic) TingRGBAColor *octreeColor;
@property (nonatomic) unsigned int octreePath;
@property (retain, nonatomic) TingRGBAColor *coverColor;
@property (retain, nonatomic) TingRGBAColor *playerBackgroundColor;
@property (retain, nonatomic) TingRGBAColor *minibarColor;
@property (retain, nonatomic) TingRGBAColor *linkColor;
@property (retain, nonatomic) TingRGBAColor *playerBackgroundColorForAudio;

+ (void)initialize;

@end
