@class BaseRequest, NSString;

@interface MMListenAddFootprintRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) int type;
@property (nonatomic) BOOL isCancel;

+ (void)initialize;

@end
