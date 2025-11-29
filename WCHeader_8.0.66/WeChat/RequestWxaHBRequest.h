@class BaseRequest, NSString;

@interface RequestWxaHBRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) int hbType;
@property (nonatomic) int totalNum;
@property (nonatomic) unsigned long long totalAmount;
@property (nonatomic) unsigned int perValue;
@property (retain, nonatomic) NSString *wishing;
@property (nonatomic) unsigned int hbScope;

+ (void)initialize;

@end
