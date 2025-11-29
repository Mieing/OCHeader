@class BaseRequest, NSMutableArray, NSString;

@interface AcceptCardListFromAppRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *cardList;
@property (nonatomic) unsigned int fromScene;
@property (retain, nonatomic) NSString *jsCheckinfoUrl;
@property (retain, nonatomic) NSString *jsCheckinfoSessionUsername;
@property (nonatomic) unsigned int statisticScene;

+ (void)initialize;

@end
