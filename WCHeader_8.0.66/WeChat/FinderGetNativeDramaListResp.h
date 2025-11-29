@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetNativeDramaListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *upLastbuffer;
@property (retain, nonatomic) NSData *downLastbuffer;
@property (nonatomic) BOOL downContinueFlag;
@property (nonatomic) BOOL upContinueFlag;
@property (nonatomic) unsigned long long targetObjectId;

+ (void)initialize;

@end
