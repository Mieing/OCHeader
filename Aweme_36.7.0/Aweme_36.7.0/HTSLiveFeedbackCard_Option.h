@class NSString;

@interface HTSLiveFeedbackCard_Option : IESLivePBBaseMessage

@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long subQuestionId;
@property (nonatomic) BOOL negative;
@property (copy, nonatomic) NSString *toastText;
@property (nonatomic) int tendency;

+ (id)descriptor;

- (id)subQuestionID;

@end
