@class QualityTagInfo;

@interface OnQualityChangeInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long qualityChangeControlFlag;
@property (retain, nonatomic) QualityTagInfo *qualityTagInfo;
@property (nonatomic) unsigned int changeQualityCfg;

+ (void)initialize;

@end
