@class BaseRequest, NSString;

@interface MMListenDislikeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *categoryId;

+ (void)initialize;

@end
