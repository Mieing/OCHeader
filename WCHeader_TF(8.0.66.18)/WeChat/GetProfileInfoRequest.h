@class BaseRequest, NSString;

@interface GetProfileInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *lanType;
@property (nonatomic) int srcScene;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *sessionBuff;
@property (retain, nonatomic) NSString *recommendDishBuffer;

+ (void)initialize;

@end
