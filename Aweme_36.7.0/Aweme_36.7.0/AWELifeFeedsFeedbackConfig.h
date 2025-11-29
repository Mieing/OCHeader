@class NSString, NSArray;

@interface AWELifeFeedsFeedbackConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSArray *feedbackOptions;

+ (id)createFeedBackConfigWithData:(id)a0;

- (void).cxx_destruct;

@end
