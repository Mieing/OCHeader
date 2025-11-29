@class FinderLbsSameCityConfig, NSData, NSMutableArray, BaseResponse;

@interface FinderGetLbsStreamResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) FinderLbsSameCityConfig *cityConfig;

+ (void)initialize;

@end
