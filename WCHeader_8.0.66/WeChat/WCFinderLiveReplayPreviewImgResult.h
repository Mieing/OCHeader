@class MMFinderLiveReplayGreateTimeModel, WCFinderLiveReplayPreviewImgInfo;

@interface WCFinderLiveReplayPreviewImgResult : NSObject

@property (retain, nonatomic) MMFinderLiveReplayGreateTimeModel *greateTimeModel;
@property (retain, nonatomic) WCFinderLiveReplayPreviewImgInfo *previewImgInfo;

- (id)getPreviewImgUrl;
- (id)getPreviewImgTargetUrl;
- (double)getPreviewTime;
- (void).cxx_destruct;

@end
