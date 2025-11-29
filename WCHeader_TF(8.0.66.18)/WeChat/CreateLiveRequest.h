@class BaseRequest, NSString;

@interface CreateLiveRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *liveName;
@property (retain, nonatomic) NSString *roomId;

+ (void)initialize;

@end
