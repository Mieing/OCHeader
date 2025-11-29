@class NSMutableArray, BaseResponse;

@interface BatchGetHeadImgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *imgPairList;

+ (void)initialize;

@end
