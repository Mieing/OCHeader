@class BaseRequest, NSString;

@interface GetCardsLayoutRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *layoutBuff;

+ (void)initialize;

@end
