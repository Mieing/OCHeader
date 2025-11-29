@class BaseRequest, NSMutableArray;

@interface MMListenGetLyricRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) int scene;

+ (void)initialize;

@end
