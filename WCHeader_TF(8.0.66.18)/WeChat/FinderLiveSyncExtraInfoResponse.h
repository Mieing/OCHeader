@class NSData, NSMutableArray, BaseResponse;

@interface FinderLiveSyncExtraInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *syncResp;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
