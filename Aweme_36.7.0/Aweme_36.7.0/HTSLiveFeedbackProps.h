@class NSString;

@interface HTSLiveFeedbackProps : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *feedbackImage;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;

+ (id)descriptor;

@end
