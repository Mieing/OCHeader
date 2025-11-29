@class WCPayCardBinInfo, NSArray, NSString, NSError, WCPayGetBankResourceCgi, WCPayGetUserExInfoCgiResponse;
@protocol WCPayBankElementQueryCgiDelegate;

@interface WCPayBankElementQueryCgi : NSObject <WCPayGetBankResourceCgiDelegate, WCPayLogicMgrExt> {
    id<WCPayBankElementQueryCgiDelegate> m_delegate;
}

@property (retain, nonatomic) WCPayGetBankResourceCgi *m_getBankResourceCgi;
@property (retain, nonatomic) WCPayCardBinInfo *m_selecteCardBinInfo;
@property (retain, nonatomic) NSArray *m_availableBankArray;
@property (retain, nonatomic) WCPayGetUserExInfoCgiResponse *m_userInfoResponse;
@property (retain, nonatomic) NSError *m_error;
@property BOOL fromRealname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWitDelegate:(id)a0;
- (void)OnGetBindingCardBin:(id)a0 AvailableBank:(id)a1 userExInfoResponse:(id)a2 Error:(id)a3;
- (void)GetCardBinAndAvailableBank:(id)a0 scene:(long long)a1 sessionId:(id)a2;
- (void)clearResponse;
- (void)OnGetBankResourceResponseOK:(id)a0;
- (void)OnGetBankResourceResponseError:(id)a0 errorCode:(unsigned int)a1;
- (void).cxx_destruct;

@end
