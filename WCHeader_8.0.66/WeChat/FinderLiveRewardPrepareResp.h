@class NSData, NSMutableArray, BaseResponse;

@interface FinderLiveRewardPrepareResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *prepareBuf;
@property (retain, nonatomic) NSData *ctxBuf;
@property (retain, nonatomic) NSMutableArray *prepareBufInfos;
@property (retain, nonatomic) NSMutableArray *ctxBufInfos;

+ (void)initialize;

@end
