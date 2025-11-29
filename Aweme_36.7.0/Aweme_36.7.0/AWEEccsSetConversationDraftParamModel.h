@class NSString;

@interface AWEEccsSetConversationDraftParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *draftText;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
