@class NSMutableArray, BaseResponse;

@interface CheckCDNResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *list;

+ (void)initialize;

@end
