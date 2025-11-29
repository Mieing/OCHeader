@class NSString, NSMutableArray, NSTimer;

@interface WCCardDynamicCodeGenerator : MMObject <IWCCardPkgExt> {
    NSString *_nsCardId;
    NSMutableArray *_arrCodes;
    double _codeExpiredTime;
    unsigned int _uiCountOfNeedRefresh;
    NSTimer *_oCheckExpireTimer;
    BOOL _bFetchingCode;
}

@property (copy, nonatomic) id /* block */ getCodeBlock;
@property (nonatomic) unsigned int refreshInteval;
@property (readonly, nonatomic) unsigned int uiRefreshInteval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCardId:(id)a0;
- (BOOL)bHasAvailableCode;
- (id)getCode:(id /* block */)a0;
- (void)fetchCodeFromSvr;
- (void)clearAllCode;
- (id)takeOneCode;
- (void)tryFetchCodeIfLackCode;
- (BOOL)bCodesExpired;
- (void)onGetSerialNumberData:(id)a0 ErrCode:(int)a1;
- (void).cxx_destruct;

@end
