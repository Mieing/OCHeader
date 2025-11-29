@class NSString, EmotionFinderLinkInfo, EmotionWxAppLinkInfo;

@interface EmotionLink : WXPBGeneratedMessage

@property (nonatomic) unsigned int linkType;
@property (retain, nonatomic) NSString *h5;
@property (retain, nonatomic) EmotionFinderLinkInfo *finder;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) EmotionWxAppLinkInfo *wxApp;

+ (void)initialize;

@end
