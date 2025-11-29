@class BaseRequest;

@interface GetWxaDesktopEntranceRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) double locationX;
@property (nonatomic) double locationY;

+ (void)initialize;

@end
