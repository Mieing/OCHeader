@class BaseRequest;

@interface PinTopFavRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int favId;
@property (nonatomic) BOOL isCancel;

+ (void)initialize;

@end
