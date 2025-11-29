@class NSData, NSMutableArray, BaseResponse;

@interface ReliableSyncResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *respContinueFlag;
@property (retain, nonatomic) NSData *respSyncKeyBuff;
@property (retain, nonatomic) NSMutableArray *syncItemList;

+ (void)initialize;

- (void)setSyncItemList:(id)a0;
- (id)syncItemList;
- (void)setRespSyncKeyBuff:(id)a0;
- (id)respSyncKeyBuff;
- (void)setRespContinueFlag:(id)a0;
- (id)respContinueFlag;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
