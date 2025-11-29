@class NSString, NSNumber, NSDictionary;

@interface AnnieSendSubscribeEmojiParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *emojiId;
@property (retain, nonatomic) NSNumber *ratioType;
@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *messageSource;
@property (copy, nonatomic) NSDictionary *extraParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
