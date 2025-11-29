@class NSString;

@interface AWEIMSchoolGroupVerifyViewModel : NSObject

@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, nonatomic) long long currentYear;
@property (copy, nonatomic) NSString *college;
@property (nonatomic) long long selectedYear;
@property (nonatomic) BOOL autoSendIntroduceEnable;
@property (nonatomic) BOOL isEnableContinue;
@property (nonatomic) double lastSubmitTimestamp;

- (void)refreshEnableContinueState;
- (long long)__currentYear;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConversationID:(id)a0;

@end
