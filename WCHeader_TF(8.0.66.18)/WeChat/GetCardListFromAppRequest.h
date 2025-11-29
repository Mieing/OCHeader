@class BaseRequest, NSMutableArray, NSString;

@interface GetCardListFromAppRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *cardList;
@property (nonatomic) unsigned int fromScene;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *packageName;
@property (retain, nonatomic) NSString *sign;
@property (retain, nonatomic) NSString *jsCheckinfoUrl;
@property (retain, nonatomic) NSString *jsCheckinfoSessionUsername;
@property (retain, nonatomic) NSString *consumedboxCardId;
@property (nonatomic) unsigned int statisticScene;

+ (void)initialize;

@end
