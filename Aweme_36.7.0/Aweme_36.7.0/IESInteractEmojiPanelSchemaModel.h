@class NSString;

@interface IESInteractEmojiPanelSchemaModel : IESLiveWebcastBaseModel

@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *requestPage;

- (id)parsedKeys;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
