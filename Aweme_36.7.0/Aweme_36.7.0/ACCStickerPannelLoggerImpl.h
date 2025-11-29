@class NSString, AWEVideoPublishViewModel;

@interface ACCStickerPannelLoggerImpl : NSObject <ACCStickerPannelLogger>

@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logSlidingDidSelectIndex:(long long)a0 title:(id)a1;
- (void)logStickerPannelDidSelectSticker:(id)a0 index:(long long)a1 tab:(id)a2 categoryName:(id)a3 extra:(id)a4;
- (void)logStickerWillDisplay:(id)a0 categoryId:(id)a1 categoryName:(id)a2 extra:(id)a3;
- (void)logBottomBarDidSelectCategory:(id)a0 pannelTab:(id)a1 index:(long long)a2;
- (void)logStickerDownloadFinished:(id)a0;
- (void)logPannelUpdateFailed:(id)a0 updateDuration:(double)a1;
- (void)logPannelUpdateFinished:(id)a0 needUpdate:(BOOL)a1 updateDuration:(double)a2 success:(BOOL)a3 error:(id)a4;
- (void)logStickerPanelDidDeleteStickerWith:(id)a0 categoryName:(id)a1 extra:(id)a2;
- (void)logStickerPanelDidClickExpandWith:(id)a0 categoryName:(id)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
