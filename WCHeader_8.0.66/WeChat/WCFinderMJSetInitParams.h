@class WCFinderMJSetNecessaryParams, WCFinderMJSetOptionalParams;

@interface WCFinderMJSetInitParams : NSObject

@property (retain, nonatomic) WCFinderMJSetNecessaryParams *necessaryParams;
@property (retain, nonatomic) WCFinderMJSetOptionalParams *optionalParams;

+ (id)paramsWithTemplateTopicId:(id)a0;
+ (id)paramsWithTemplateShortUrl:(id)a0;

- (id)initWithTemplateTopicId:(id)a0;
- (id)initWithTemplateShortUrl:(id)a0;
- (void).cxx_destruct;

@end
