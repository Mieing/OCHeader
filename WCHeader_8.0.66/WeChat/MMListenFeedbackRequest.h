@class BaseRequest, NSString, NSMutableArray;

@interface MMListenFeedbackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSMutableArray *feedbackInfos;
@property (nonatomic) int fromScene;
@property (nonatomic) unsigned int playDuration;

+ (void)initialize;

@end
