@class NSString;

@interface GetA8KeySecurityBuffInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int ctrlMode;
@property (nonatomic) unsigned int preview;
@property (nonatomic) unsigned int textUrlReshare;
@property (retain, nonatomic) NSString *previewSafetyTips;
@property (retain, nonatomic) NSString *previewPvSummary;
@property (nonatomic) unsigned int extractPageFeature;

+ (void)initialize;

@end
