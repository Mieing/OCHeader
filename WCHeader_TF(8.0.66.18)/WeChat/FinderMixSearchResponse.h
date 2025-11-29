@class NSData, NSMutableArray, BaseResponse;

@interface FinderMixSearchResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *objectList;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) unsigned int continueFlag;

+ (void)initialize;

@end
