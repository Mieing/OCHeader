@class NSDictionary;

@interface AWESelfAppealHelper : NSObject

@property (retain, nonatomic) NSDictionary *themeDict;

+ (id)sharedInstance;

- (id)customAppealText;
- (id)customAppealColor;
- (id)customQAText;
- (id)customQAColor;
- (id)customSMSText;
- (id)customSMSColor;
- (void).cxx_destruct;

@end
