@class NSString;

@interface AWEEccsLoadHistoryMessageParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *pageID;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
