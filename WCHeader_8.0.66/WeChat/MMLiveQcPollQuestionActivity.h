@class NSArray, MMLiveQcPollQuestion;

@interface MMLiveQcPollQuestionActivity : NSObject

@property (retain, nonatomic) MMLiveQcPollQuestion *question;
@property (retain, nonatomic) NSArray *response;
@property (nonatomic) unsigned long long exposureUnixEpochTime;
@property (nonatomic) unsigned long long firstResponseUnixEpochTime;

- (void).cxx_destruct;

@end
