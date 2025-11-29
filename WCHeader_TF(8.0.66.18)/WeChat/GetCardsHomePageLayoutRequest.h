@class BaseRequest, NSString;

@interface GetCardsHomePageLayoutRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (retain, nonatomic) NSString *buff;
@property (retain, nonatomic) NSString *redBuff;

+ (void)initialize;

@end
