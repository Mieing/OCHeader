@class BaseRequest, NSString;

@interface RemoveCardInRecentlyUsedListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *userCardId;

+ (void)initialize;

@end
