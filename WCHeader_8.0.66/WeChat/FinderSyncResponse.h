@class NSData, SKBuiltinBuffer_t, FinderPopupClientFreqConfig, BaseResponse, NSMutableArray, FinderCheckExpireInfo, CmdList, EntranceReportSwitch, FinderObjectCtrl;

@interface FinderSyncResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) CmdList *cmdListDiscarded;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;
@property (retain, nonatomic) NSMutableArray *contacts;
@property (retain, nonatomic) NSMutableArray *self_;
@property (retain, nonatomic) NSMutableArray *cmdList;
@property (nonatomic) unsigned int roundRobinInterval;
@property (retain, nonatomic) FinderCheckExpireInfo *checkExpireInfo;
@property (retain, nonatomic) EntranceReportSwitch *entranceExposeSwitch;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderObjectCtrl *objectCtrl;
@property (retain, nonatomic) NSMutableArray *reddotFreqCtrl;
@property (retain, nonatomic) NSMutableArray *reddotDiscardConfig;
@property (retain, nonatomic) FinderPopupClientFreqConfig *popupClientFreqConfig;

+ (void)initialize;

- (void)setPopupClientFreqConfig:(id)a0;
- (id)popupClientFreqConfig;
- (void)setReddotDiscardConfig:(id)a0;
- (id)reddotDiscardConfig;
- (void)setReddotFreqCtrl:(id)a0;
- (id)reddotFreqCtrl;
- (void)setObjectCtrl:(id)a0;
- (id)objectCtrl;
- (void)setLastBuffer:(id)a0;
- (id)lastBuffer;
- (void)setEntranceExposeSwitch:(id)a0;
- (id)entranceExposeSwitch;
- (void)setCheckExpireInfo:(id)a0;
- (id)checkExpireInfo;
- (void)setRoundRobinInterval:(unsigned int)a0;
- (unsigned int)roundRobinInterval;
- (void)setCmdList:(id)a0;
- (id)cmdList;
- (void)setSelf_:(id)a0;
- (id)self_;
- (void)setContacts:(id)a0;
- (id)contacts;
- (void)setKeyBuf:(id)a0;
- (id)keyBuf;
- (void)setContinueFlag:(unsigned int)a0;
- (unsigned int)continueFlag;
- (void)setCmdListDiscarded:(id)a0;
- (id)cmdListDiscarded;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
