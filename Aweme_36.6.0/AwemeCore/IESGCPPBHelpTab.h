@class NSString, IESGCPPBFeedbackEntrance, IESGCPPBFAQ;

@interface IESGCPPBHelpTab : GPBMessage

@property (nonatomic) BOOL showTab;
@property (retain, nonatomic) IESGCPPBFAQ *faq;
@property (nonatomic) BOOL hasFaq;
@property (copy, nonatomic) NSString *helpdeskSchema;
@property (retain, nonatomic) IESGCPPBFeedbackEntrance *feedbackEntrance;
@property (nonatomic) BOOL hasFeedbackEntrance;

+ (id)descriptor;

@end
