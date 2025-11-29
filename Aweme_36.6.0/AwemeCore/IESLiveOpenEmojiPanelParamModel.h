@class NSString;

@interface IESLiveOpenEmojiPanelParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *emojiTab;
@property (copy, nonatomic) NSString *messageSource;
@property (copy, nonatomic) NSString *requestSource;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
