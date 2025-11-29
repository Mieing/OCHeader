@class NSMutableArray, BaseResponse;

@interface BatchModContactTypeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int resInfoCount;
@property (retain, nonatomic) NSMutableArray *resInfoList;

+ (void)initialize;

@end
