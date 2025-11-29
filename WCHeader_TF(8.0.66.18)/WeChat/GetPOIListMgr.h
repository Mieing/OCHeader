@class NSString, SKBuiltinBuffer_t;

@interface GetPOIListMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol> {
    struct CLLocationCoordinate2D { double latitude; double longitude; } _lastCoordinate;
}

@property (retain, nonatomic) SKBuiltinBuffer_t *nearBuff;
@property (retain, nonatomic) SKBuiltinBuffer_t *searchBuff;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)getNearPOIList:(struct CLLocationCoordinate2D { double x0; double x1; })a0 StartFromFirst:(BOOL)a1 Scene:(unsigned int)a2 Scale:(double)a3 IndoorInfo:(id)a4 UserActuallyLocation:(id)a5;
- (BOOL)autoSearchPOIList:(struct CLLocationCoordinate2D { double x0; double x1; })a0 Keyword:(id)a1 Scene:(unsigned int)a2 Scale:(double)a3 UserActuallyLocation:(id)a4 StartFromFirst:(BOOL)a5;
- (BOOL)getSearchPOIList:(struct CLLocationCoordinate2D { double x0; double x1; })a0 KeyWord:(id)a1 StartFromFirst:(BOOL)a2 Scene:(unsigned int)a3 Scale:(double)a4 UserActuallyLocation:(id)a5;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
