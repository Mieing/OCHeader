@class BaseRequest, NSString;

@interface MMListenStarRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) BOOL isCancel;

+ (void)initialize;

@end
