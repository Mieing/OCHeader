@class NSString, WCPaySingleDownloadLogic, PAGImage, NSMutableDictionary;
@protocol WCPayWebPagViewDelegate;

@interface WCPayWebPagView : PAGView <WCPaySingleDownloadLogicExt>

@property (retain, nonatomic) NSString *pagUrl;
@property (nonatomic) BOOL isForceUpdate;
@property (retain, nonatomic) WCPaySingleDownloadLogic *singleDownloadLogic;
@property (retain, nonatomic) PAGImage *relplacePagImage;
@property (nonatomic) int replaceIndex;
@property (weak, nonatomic) id<WCPayWebPagViewDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *extraInfoDict;
@property (nonatomic) BOOL isNeedFlush;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCurrentPagUrl;
- (void)setReplaceImage:(id)a0 index:(int)a1;
- (void)setPagURL:(id)a0;
- (void)setPagURL:(id)a0 forceUpdate:(BOOL)a1 pagLoadDelegate:(id)a2;
- (void)startLoadPagData;
- (void)onDownloadTaskCompletion:(long long)a0 taskUrl:(id)a1 extraInfo:(id)a2 filePath:(id)a3 totalLength:(unsigned long long)a4;
- (void).cxx_destruct;

@end
