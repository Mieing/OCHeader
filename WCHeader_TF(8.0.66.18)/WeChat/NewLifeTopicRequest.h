@class BaseRequest, NSString, NSMutableArray, NewLifeTextInEdit;

@interface NewLifeTopicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NewLifeTextInEdit *text;
@property (retain, nonatomic) NSString *topicText;
@property (retain, nonatomic) NSMutableArray *existTopics;
@property (retain, nonatomic) NSMutableArray *imageTagList;

+ (void)initialize;

@end
