@class NSData, NSMutableArray, BaseResponse;

@interface FinderAcctRecommendResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
