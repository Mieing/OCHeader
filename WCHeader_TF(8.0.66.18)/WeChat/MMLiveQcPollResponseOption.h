@class NSString, MMLiveQcPollQuestion;

@interface MMLiveQcPollResponseOption : NSObject

@property (retain, nonatomic) NSString *optionId;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) MMLiveQcPollQuestion *followUp;

+ (id)responseOptionWithBackendModel:(id)a0 questionBackendModels:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
