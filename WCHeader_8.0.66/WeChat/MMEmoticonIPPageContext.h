@class EmotionBannerSet, StoreEmotionAllListReportInfo;

@interface MMEmoticonIPPageContext : MMEmoticonLiteAppPageContextBase

@property (retain, nonatomic) EmotionBannerSet *bannerSet;
@property (retain, nonatomic) StoreEmotionAllListReportInfo *reportInfo;

- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (void).cxx_destruct;

@end
