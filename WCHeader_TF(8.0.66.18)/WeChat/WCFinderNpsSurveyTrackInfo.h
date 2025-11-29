@class NSString, NSArray;

@interface WCFinderNpsSurveyTrackInfo : NSObject

@property (nonatomic) unsigned long long shownQuestionId;
@property (nonatomic) unsigned long long selectedAnswerId;
@property (copy, nonatomic) NSString *inputAnswerText;
@property (retain, nonatomic) NSArray *multiAnswerIDs;

- (void).cxx_destruct;

@end
