@class NSString, NSDictionary;

@interface AnnieInputActivityEmojiParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *emojiId;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *messageSource;
@property (copy, nonatomic) NSString *requestSource;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
