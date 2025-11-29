@class WCFinderLiveReplayPreviewImgInfo, NSMutableArray;

@interface WCFinderLiveReplayPreviewImgLoader : NSObject

@property (nonatomic) BOOL isStartLoad;
@property (nonatomic) double currPreviewTime;
@property (nonatomic) long long currPreviewImgInfoIndex;
@property (retain, nonatomic) WCFinderLiveReplayPreviewImgInfo *currPreviewImgInfo;
@property (retain, nonatomic) NSMutableArray *previewImgList;
@property (nonatomic) unsigned long long currPreRequestCnt;
@property (nonatomic) BOOL hasCompletePreRequest;
@property (nonatomic) unsigned long long lastPreRequestBySide;
@property (copy, nonatomic) id /* block */ preLoadCompletion;
@property (readonly, nonatomic) unsigned long long previewImgCount;

- (void)startLoad;
- (void)appendPreviewThumbList:(id)a0;
- (id)getNearestPreviewImgInfoWithTime:(double)a0;
- (void)updateCurrentPreviewTime:(double)a0;
- (void)updateCurrPreviewImgInfo;
- (void)reUpdateCurrPreviewImgInfoIndex;
- (void)sortPreviewImgList;
- (long long)getNearestPreviewImgInfoIndexWithTime:(double)a0;
- (void)tryToPreLoadPreviewImgs;
- (void)checkHasCompletePreRequest;
- (void)updateHasCompletePreRequest:(BOOL)a0;
- (id)getNextPreRequestPreviewImgInfo:(unsigned long long *)a0;
- (id)getLeftSideNearestUnLoadedImgInfo:(unsigned long long)a0;
- (id)getRightSideNearestUnLoadedImgInfo:(unsigned long long)a0;
- (void).cxx_destruct;

@end
