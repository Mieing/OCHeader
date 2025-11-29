@class NSString, NSMutableArray;

@interface MJAnalyticsPreviewTemplateAction : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *previewTemplateId;
@property (nonatomic) int previewTemplateSourceType;
@property (nonatomic) unsigned long long previewDurationMs;
@property (retain, nonatomic) NSMutableArray *musicActions;

+ (void)initialize;

@end
