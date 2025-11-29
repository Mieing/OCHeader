@class BaseRequest, NSString;

@interface GetWxaAppNearbyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) double locationX;
@property (nonatomic) double locationY;
@property (retain, nonatomic) NSString *nearbyListId;
@property (nonatomic) BOOL needSetNearbyState;

+ (void)initialize;

@end
