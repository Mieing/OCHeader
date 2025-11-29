@class NSArray, NSString;

@interface AWEIMTextSafeExamMessage : AWEIMTextMessage

@property (copy, nonatomic) NSArray *examTemplates;
@property (nonatomic) long long elderlyPeopleAnswerStatus;
@property (copy, nonatomic) NSString *rawMessageContent;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedEmojiReply;
- (void)didFinishConfig;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)contentAttributes;

@end
