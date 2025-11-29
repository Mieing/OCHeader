@class NSString, NSArray;

@interface AWEDCFeedDislikeCommonPanelConfig : AWEDCFeedBaseConfig

@property (retain, nonatomic) NSString *feedbackSectionTitle;
@property (retain, nonatomic) NSArray *feedbackInfo;
@property (nonatomic) long long maxLines;

- (void)setupDefaultConfig;
- (void)updateConfigWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
