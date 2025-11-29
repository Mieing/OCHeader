@class NSMutableArray, BaseResponse;

@interface MMListenGetLyricResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *items;

+ (void)initialize;

@end
