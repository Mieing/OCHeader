@interface AWEShowPlayletImpl.AWEShowPlayletAdAutoPlayViewModel : NSObject <AWEShowPlayletAdInsertHandler> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ currentModel;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ nextModel;
    void /* unknown type, empty encoding */ adModel;
    void /* unknown type, empty encoding */ adRequestSuccessComplete;
    void /* unknown type, empty encoding */ autoPlayActive;
    void /* unknown type, empty encoding */ adInsertConfig;
    void /* unknown type, empty encoding */ playletAdInsertControl;
}

- (id)showPlayletADContainerModel;
- (id)showPlayletADContainerDataSource;
- (id)showPlayletClientSideParamsJsonString;
- (id)seriesExtraParamsJsonString;
- (void)adInsertControlCallBackWithModel:(id)a0;
- (void)requestFinishedUpdateReqInfo;
- (void)dislikePlayletInsertAD:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
