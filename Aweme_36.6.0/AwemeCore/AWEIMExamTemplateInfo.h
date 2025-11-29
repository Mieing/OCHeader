@class NSString;

@interface AWEIMExamTemplateInfo : NSObject

@property (nonatomic) long long examId;
@property (copy, nonatomic) NSString *examUrl;
@property (nonatomic) long long retryTimes;
@property (copy, nonatomic) NSString *ext;
@property (nonatomic) long long examSubId;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *conversationID;

+ (id)templatesWithContentDict:(id)a0;

- (void).cxx_destruct;

@end
