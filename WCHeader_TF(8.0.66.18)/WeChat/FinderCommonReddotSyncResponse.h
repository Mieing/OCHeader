@class BaseResponse, EntranceReportSwitch, NSData, NSMutableArray, SKBuiltinBuffer_t;

@interface FinderCommonReddotSyncResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;
@property (retain, nonatomic) NSMutableArray *cmdList;
@property (retain, nonatomic) EntranceReportSwitch *entranceExposeSwitch;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

- (void)setLastBuffer:(id)a0;
- (id)lastBuffer;
- (void)setEntranceExposeSwitch:(id)a0;
- (id)entranceExposeSwitch;
- (void)setCmdList:(id)a0;
- (id)cmdList;
- (void)setKeyBuf:(id)a0;
- (id)keyBuf;
- (void)setContinueFlag:(unsigned int)a0;
- (unsigned int)continueFlag;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
