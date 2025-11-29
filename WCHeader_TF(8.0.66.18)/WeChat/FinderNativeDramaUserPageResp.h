@class NSData, NSMutableArray, BaseResponse;

@interface FinderNativeDramaUserPageResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *dramaList;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
