@class NSString, HTSLiveFeedbackEntrance, HTSLiveFAQ;

@interface HTSLiveHelpTab : IESLivePBBaseMessage

@property (nonatomic) BOOL showTab;
@property (retain, nonatomic) HTSLiveFAQ *faq;
@property (nonatomic) BOOL hasFaq;
@property (copy, nonatomic) NSString *helpdeskSchema;
@property (retain, nonatomic) HTSLiveFeedbackEntrance *feedbackEntrance;
@property (nonatomic) BOOL hasFeedbackEntrance;

+ (id)descriptor;

@end
