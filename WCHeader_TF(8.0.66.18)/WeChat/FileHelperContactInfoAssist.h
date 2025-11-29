@protocol ContactInfoAssistDelegate;

@interface FileHelperContactInfoAssist : WeixinContactInfoAssist

@property (weak, nonatomic) id<ContactInfoAssistDelegate> delegate;

@end
