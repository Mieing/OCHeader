@class NSData, NSMutableArray, BaseResponse;

@interface FinderCatelogStreamResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSMutableArray *object;

+ (void)initialize;

@end
