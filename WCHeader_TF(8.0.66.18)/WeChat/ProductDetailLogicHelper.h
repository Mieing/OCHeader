@class NSString, ScanProductItem, LocationRetriever;
@protocol ProductDetailLogicHelperDelegate;

@interface ProductDetailLogicHelper : MMObject <LocationRetrieveDelegate, PBMessageObserverDelegate, IMsgExt> {
    LocationRetriever *m_locationRetriver;
    ScanProductItem *m_productItem;
    unsigned long long lastMsgSvrId;
}

@property (weak, nonatomic) id<ProductDetailLogicHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProductItem:(id)a0;
- (void)dealloc;
- (void)startAsyncGetActionInfo;
- (void)sendGetActionInfoRequest:(id)a0;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationError:(int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void).cxx_destruct;

@end
