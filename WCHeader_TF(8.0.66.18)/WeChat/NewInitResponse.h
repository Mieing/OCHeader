@class NSMutableArray, SKBuiltinBuffer_t, BaseResponse;

@interface NewInitResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinBuffer_t *currentSynckey;
@property (retain, nonatomic) SKBuiltinBuffer_t *maxSynckey;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int selectBitmap;
@property (nonatomic) unsigned int cmdCount;
@property (retain, nonatomic) NSMutableArray *cmdList;
@property (nonatomic) unsigned int ratio;
@property (retain, nonatomic) SKBuiltinBuffer_t *syncUniqKeyBuf;

+ (void)initialize;

@end
