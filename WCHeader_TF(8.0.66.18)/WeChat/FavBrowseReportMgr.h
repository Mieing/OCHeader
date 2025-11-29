@class NSString, NSMutableArray, FavBrowseDetailData;

@interface FavBrowseReportMgr : MMUserService <MMUIViewControllerExt, MMServiceProtocol> {
    BOOL m_needClickStream;
    NSMutableArray *m_arrClickStreamData;
    BOOL m_needAttachBrowseData;
}

@property (retain, nonatomic) FavBrowseDetailData *currentBrowseData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)findScrollVeiwIn:(id)a0;

- (void)MMUIViewControllerWillAppear:(id)a0;
- (void)adaptBrowseDetailReportForVC:(id)a0;
- (void)startLogFavClickStream;
- (void)addClickStreamData:(id)a0;
- (void)endLogAndReport15508;
- (void)adaptClickStreamReportForVC:(id)a0;
- (void).cxx_destruct;

@end
