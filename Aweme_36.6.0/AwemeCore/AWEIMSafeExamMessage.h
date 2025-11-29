@class NSArray, NSString;

@interface AWEIMSafeExamMessage : AWEIMTextMessage

@property (copy, nonatomic) NSArray *examTemplates;
@property (copy, nonatomic) NSString *rawMessageContent;
@property (nonatomic) long long examAnswerStatus;

+ (Class)viewModelClass;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedEmojiReply;
- (void)didFinishConfig;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)contentAttributes;

@end
